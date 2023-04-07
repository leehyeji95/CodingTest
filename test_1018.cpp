#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>

#define min(a,b) a < b ? a : b
using namespace std;
// 체스판 다시 칠하기
string chess[50];
int maxVal = 2500;
string WB[8] = {
   "WBWBWBWB",
   "BWBWBWBW",
   "WBWBWBWB",
   "BWBWBWBW",
   "WBWBWBWB",
   "BWBWBWBW",
   "WBWBWBWB",
   "BWBWBWBW"
};
string BW[8] = {
   "BWBWBWBW",
   "WBWBWBWB",
   "BWBWBWBW",
   "WBWBWBWB",
   "BWBWBWBW",
   "WBWBWBWB",
   "BWBWBWBW",
   "WBWBWBWB"
};
int WB_count(int x, int y) 
{
   int count = 0;
   for(int i=0; i<8; i++)
   {
      for(int j=0; j<8; j++)
      {
         if(chess[x+i].at(y+j) != WB[i].at(j))
            count++;
      }
   }
   return count;
}
int BW_count(int x, int y) 
{
   int count = 0;
   for(int i=0; i<8; i++)
   {
      for(int j=0; j<8; j++)
      {
         if(chess[x+i].at(y+j) != BW[i].at(j))
            count++;
      }
   }
   return count;
}
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   int N, M;
   cin >> N >> M;
   
   for(int i=0; i<N; i++)
      cin >> chess[i];

   int minVal = 0;
   int res = 0;
   // 입력받은 배열 에서 8x8 배열만 확인
   for(int i=0; i+8 <= N; i++)
   {
      for(int j=0; j+8 <= M; j++)
      {
         int tmp = min(WB_count(i, j), BW_count(i,j));
         if(maxVal > tmp)
            maxVal = tmp;
      }
   }

   cout << maxVal << "\n";
   return 0;
}
