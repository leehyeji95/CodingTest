#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <queue>
#include <algorithm>

using namespace std;
char board[25][25];
int visited[25][25] = {0,};
int result[25*25+1];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,-1,0,1};
int N;
int cnt = 0;
void bfs(int x, int y)
{
   queue <pair<int, int> > q;
   visited[x][y] = 1;
   cnt++;
   
   q.push( {x,y} );
   while(!q.empty())
   {
      x = q.front().first;
      y = q.front().second;
      q.pop();
      for(int i=0; i<4; i++)
      {
         int ax = x + dx[i];
         int ay = y + dy[i];
         if(ax<0||ay<0||ax>=N||ay>=N)
            continue;
      
         if(board[ax][ay] == '1' && visited[ax][ay] == 0)
         {
            q.push( {ax,ay} );
            visited[ax][ay] = 1;
            cnt++;
         }
      }
   }
   
}
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   cin >> N;
   int idx = 0;

   for(int i=0; i<N; i++)
      cin >> board[i];

   for(int i=0; i<N; i++)
   {
      for(int j=0; j<N; j++)
      {
         if(board[i][j] == '1' && visited[i][j] == 0)
         {
            bfs(i, j);
            result[idx++] = cnt;
            cout << "danji: " << idx << ", cnt: " << cnt <<"\n";
            cnt = 0;
         }
      }
   }
   
   sort(result, result+idx);
   cout << idx << "\n";

   for(int i=0; i<idx; i++)
      cout << result[i] << "\n";

   return 0;
}
