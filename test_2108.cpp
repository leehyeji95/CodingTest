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

   // ������
   double avg = 0;
   // �Ҽ��� �ݿø� ���ؼ� int(sum) -> double ����ȯ 
   avg = round(sum / N);
   if(avg == 0) cout << 0 << "\n";
   else cout << avg << "\n"; 

   // �߾Ӱ� 
   int nMidIdx = N / 2;
   cout << arr[nMidIdx] << "\n";

   // �ֺ� ((�������ų� ������ �ι�°�� ������).. ��Ҵ�
   // �Է¹��� �� -> �迭�� �ε����� ��� arr[idx]++
   // ������ 4000 �̴ϱ� ������ -4000 ~ 4000
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

   int cnt = 0;   // �ι�°�� ���� �� ã��
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

   // ����
   int range = arr[N-1] - arr[0];
   cout << range << "\n";
   
   return 0;
}
