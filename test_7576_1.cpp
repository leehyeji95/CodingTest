#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <queue>

using namespace std;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,-1,0,1};
int N, M;
int visited[1000][1000]={0,};
int board[1000][1000];
int nDays = 0;
int nTomato=0;//안익은 토마토.
queue <pair<int, int> >q;
void bfs()
{
   if(nTomato==0) return;
   nDays--;//첫날빼자.
   while(!q.empty())
   {
      int nToday = q.size();
      for(int k=0;k<nToday; k++)
      {
         int x = q.front().first;
         int y = q.front().second;
         visited[x][y] = 1;
         q.pop();
         for(int i=0; i<4; i++)
         {
            int ax = x+dx[i];
            int ay = y+dy[i];

            if(board[ax][ay] == -1 || ax<0 || ay<0 || ax>=N || ay>=M)
               continue;

            if(board[ax][ay] == 0 && visited[ax][ay] == 0)
            {
               visited[ax][ay] = 1;
               board[ax][ay] = 1;
               q.push( {ax, ay} );
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

   cin >> M >> N;
   for(int i=0; i<N; i++)
   {
      for(int j=0; j<M; j++)
      {
         cin >> board[i][j];
         if(board[i][j] == 1) 
            q.push( {i, j});
         else if(board[i][j] == 0)
            nTomato++;
      }
   }
   
   bfs();

   if(nTomato != 0)  cout << -1 << "\n";
   else  cout << nDays << "\n";


   return 0;
}
