#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   int N;
   cin >> N;

   int arr[500000];
   double sum = 0;

   for(int i=0; i<N; i++)
   {
      cin >> arr[i];
      sum += arr[i];
   }

   cout << "=====================" << "\n";
   
   sort(arr, arr+N);

   // 산술평균
   double avg = 0;
   // 소숫점 반올림 위해서 int(sum) -> double 형변환 
   avg = round(sum / N);
   if(avg == 0) cout << 0 << "\n";
   else cout << avg << "\n"; 

   // 중앙값 
   int nMidIdx = N / 2;
   cout << arr[nMidIdx] << "\n";

   // 최빈값 ((여러개거나 없으면 두번째로 작은값).. 살았다
   // 입력받은 값 -> 배열의 인덱스로 사용 arr[idx]++
   // 절댓값이 4000 이니까 범위는 -4000 ~ 4000
   int mode[8001]={0,};
   int mostVal = 0;
   for(int i=0; i<N; i++)
   {
      int idx = arr[i] + 4000;
      mode[idx]++;
   }
   for(int i=0; i<8001; i++)
   {
      if(mode[i] > mostVal) mostVal = mode[i];
   }

   int cnt = 0;   // 두번째로 작은 수 찾기
   int res = 0;
   for(int i=0; i<8001; i++)
   {
      if(mode[i] == mostVal)
      {
         cnt++;
         res = i-4000;
      }
      if(cnt == 2)
      {
         res = i-4000;
         break;
      }
   }
   cout << res << "\n";

   // 범위
   int range = arr[N-1] - arr[0];
   cout << range << "\n";
   
   return 0;
}
