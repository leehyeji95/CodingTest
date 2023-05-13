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
int nDays = 0;
int nTomato = 0;  // 안익은 토매러
queue<pair<pair<int,int>,int>> q;
void bfs()
{
   if(nTomato == 0) return;
   nDays--;
   while(!q.empty())
   {
      int size = q.size();
      for(int k=0; k<size; k++)
      {
         int x = q.front().first.first;
         int y = q.front().first.second;
         int z = q.front().second;
         visited[x][y][z] = 1;
         q.pop();
         for(int i=0; i<6; i++)
         {
            int ax = x+dir[i][0];
            int ay = y+dir[i][1];
            int az = z+dir[i][2];

            // || OR연산자 앞에 조건 T/F 냐에 따라서 뒤에 조건 비교함.. 이때 OUTOFBOUNDS 나올수있음... 대박...
            if(ax<0 || ay<0 || az<0|| ax>=N || ay>=M || az>=H || board[ax][ay][az] == -1)
               continue;

            if(board[ax][ay][az] == 0 && visited[ax][ay][az] == 0)
            {
               visited[ax][ay][az] = 1;
               board[ax][ay][az] = 1;
               q.push(make_pair(make_pair(ax,ay),az));
               nTomato--;
            }
         }
      }
      nDays++;
   }

}
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   cin >> M >> N >> H;
   for(int k=0; k<H; k++)
   {
      for(int i=0; i<N; i++)
      {
         for(int j=0; j<M; j++)
         {
            cin >> board[i][j][k];
            if(board[i][j][k] == 1) 
               q.push(make_pair(make_pair(i,j),k));
            else if(board[i][j][k] == 0)
               nTomato++;
         }
      }
   }
   
   bfs();

   if(nTomato != 0) cout << -1 << "\n";
   else cout << nDays << "\n";

   return 0;
}
