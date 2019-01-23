#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "\n\tПоиск номера строки с наибольшей суммой \n";
	cout<<("\n\tОбъеденяем две таблицы в одну A+B=C\n");

	int n = 10;
	int A[10];
	int B[10];
	int C[20];


	int k = 0;
	for (int i = 0; i <n; i++) {
		A[i] = (int)(rand()%10);
		B[i] = (int)(rand() % 10);
		C[k] = A[i]; C[k + 1] = B[i];
		k += 2;
	}


	
	

	for (int i = 0; i <n; i++) {
		printf("A[%d]=%d  ", i, A[i]);
	}
	cout<<("\n");

	for (int i = 0; i <n; i++) {
		printf("B[%d]=%d  ", i, B[i]);
	}
	cout<<("\n");


	for (int i = 0; i <2 * n; i++) {
		printf("C[%d]=%d\n", i, C[i]);
	}
	cout<<("\n");

	cout << endl << endl << "\t";
	system("pause");
	return 0;
}