#include <iostream>

using namespace std;

int main()
{
 setlocale(LC_ALL, ".1251");
 cout << "\n\tПоиск номера строки с наибольшей суммой \n";
 cout << "\n\n";


 int n = 10;
 int A[11][11];
 int S[10];

 for (int i = 0; i <n; i++) {
  S[i] = 0;
 }

 for (int i = 0; i <n; i++) {
  for (int j = 0; j <n; j++) {
   A[i][j] = (rand() % 100);
   printf("%4d", A[i][j]);
   S[i] += A[i][j];
  }
  printf(" сумма элментов в строке равна S[%d]=%d\n", i, S[i]);
 }


 int num = 0;
 int max = S[num];
 for (int i = 0; i <n; i++) {
  if (max<S[i])
  {
   max = S[i];
   num = i;
  }
 }

 printf("\n\n\tНаибольшая сумма в строке с номером %d\n\n", num + 1);

 cout << endl << endl << "\t";
 system("pause");
 return 0;
}
