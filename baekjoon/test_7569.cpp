#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <queue>

using namespace std;
int dir[6][3] = { {1,0,0}, {0,-1,0}, {-1,0,0}, {0,1,0}, {0,0,1}, {0,0,-1} };
int M, N, H;
int visited[100][100][100]={0,0,0};
int board[100][100][100];
int days[100][100][100]={0,0,0};
int nDays = 0;
queue<pair<pair<int,int>,int>> q;
void bfs()
{
   while(!q.empty())
   {
      int x = q.front().first.first;
      int y = q.front().first.second;
      int z = q.front().second;
      visited[z][x][y] = 1;
      q.pop();
      for(int i=0; i<6; i++)
      {
         int ax = x+dir[i][0];
         int ay = y+dir[i][1];
         int az = z+dir[i][2];


         if(board[az][ax][ay] == -1 || ax<0 || ay<0 || az<0|| ax>=N || ay>=M || az>=H)
            continue;

         if(board[az][ax][ay] == 0 && visited[az][ax][ay] == 0)
         {
            days[az][ax][ay] = days[z][x][y] + 1;
            if(nDays < days[az][ax][ay])
               nDays = days[az][ax][ay];

            visited[az][ax][ay] = 1;
            board[az][ax][ay] = 1;
            //q.push({ {ax,ay},az });
            q.push(make_pair(make_pair(ax,ay),az));
         }
      }
   }

}
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   cin >> M >> N >> H;
   for(int i=0; i<H; i++)
   {
      for(int j=0; j<N; j++)
      {
         for(int k=0; k<M; k++)
         {
            cin >> board[i][j][k];
            if(board[i][j][k] == 1) 
               //q.push({ {j,k},i });
               q.push(make_pair(make_pair(j,k),i));
         }
      }
   }
   
   bfs();

   for(int i=0; i<H; i++)
   {
      for(int j=0; j<N; j++)
      {
         for(int k=0; k<M; k++)
         {
            if(board[i][j][k] == 0)
            {
               cout << -1 << "\n";
               return 0;
            }
         }
      }
   }

   cout << nDays << "\n";
   return 0;
}
