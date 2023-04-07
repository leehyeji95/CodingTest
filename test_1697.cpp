#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <queue>

using namespace std;
queue<int> q;
int visited[100001] = {0,};
int check[100001] = {0,};
int dx[3] = {-1, 1, 2};
int N, K;

void bfs(int x)
{
   visited[x] = 1;
   check[x] = 0;
   
   q.push(x);
   while(!q.empty())
   {
      x = q.front();
      q.pop();
      for(int i=0; i<3; i++)
      {
         int next;
         if(i == 2) next = x * dx[i];
         else next = x + dx[i];
         
         if(next<0||next>100000) continue;
         cout << "next: " << next << "\n";
         if(visited[next] == 0)
         {
            check[next] = check[x] + 1;
            q.push(next);
            visited[next] = 1;
            if(next == K) return;
         }

      }
   }
}     
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   cin >> N >> K;
   bfs(N);

   cout << check[K] << "\n";
   return 0;
}
