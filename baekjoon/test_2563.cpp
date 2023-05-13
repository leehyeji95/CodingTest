#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>

using namespace std;
bool paper[1001][1001] = {0,};
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   int pCnt;
   cin >> pCnt;

   for(int i=0; i < pCnt; i++)
   {
      int x, y;
      cin >> x >> y;
      for(int j=x; j<=x+9; j++)
      {
         for(int k=y; k<=y+9; k++)
            paper[j][k] = 1;
      }
   }

   int res = 0;
   for(int i=0; i<1000; i++)
   {
      for(int j=0; j<1000; j++)
      {
         if(paper[i][j] == 1)
            res++;
      }
   }

   cout << res << "\n";

   return 0;
}
