#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <queue>
#include <vector>
#include <algorithm>

#define MAX 25

using namespace std;

int N;
string strView[MAX];
int visited[MAX][MAX]={0,};
vector<int> v;
int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};
int nCnt = 0;

void dfs(int x, int y)
{
   visited[x][y] = 1;
   //nCnt++;
   for(int i=0; i<4; i++)
   {
      int ax = x + dx[i];
      int ay = y + dy[i];
      if(ax<0 || ay<0 || ax>=N || ay>=N)
         continue;

      if(strView[ax].at(ay) == '1' && visited[ax][ay] == 0)
      {
         nCnt++;
         visited[ax][ay] = 1;
         dfs(ax, ay);
      }
   }

}
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   memset(visited, 0x00, sizeof(visited));
   //int cnt = 0;
   cin >> N;
   
   for(int i=0; i<N; i++)
   {
      cin >> strView[i];
   }

   for(int i=0; i<N; i++)
   {
      for(int j=0; j<N; j++)
      {
         if(strView[i].at(j) == '1' && visited[i][j] == 0)
         {
            //cnt++;
            nCnt=1;
            dfs(i, j);
            //q.push(nCnt);
            v.push_back(nCnt);
         }
      }
   }
  
   sort(v.begin(), v.end());
   cout <<  v.size() << "\n";
   for(int i=0; i<v.size(); i++)
      cout << v[i] << "\n";
    
/*
   cout << q.size() << "\n";
   int qcnt = q.size();
   for(int i=0; i<qcnt; i++)
   {
      cout << q.front() << "\n";
      q.pop();
   }
*/

   return 0;
}
