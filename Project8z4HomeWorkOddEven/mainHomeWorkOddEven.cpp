#include<iostream>
using namespace std;

#define TAB "\t"
#define PAUSE system("pause");

void main()
{
	setlocale(LC_ALL, "");

	int arraySize;
	int countEven = 0, countOdd = 0;
	cout << "Введите размер массива: "; cin >> arraySize;
	int* arr = new int[arraySize] {};
	for (int i = 0; i < arraySize; i++)
	{
		arr[i] = rand() % 100;
		arr[i] % 2 == 0 ? countEven++ : countOdd++;
	}

	int* even = new int[countEven];
	int* odd = new int[countOdd];

	countEven = 0, countOdd = 0;
	for (int i = 0; i < arraySize; i++)
	{
		arr[i] % 2 == 0 ? even[countEven++] = arr[i] : odd[countOdd++] = arr[i];
	}

	cout << "Полученный массив: " << endl;
	for (int i = 0; i < arraySize; i++)
	{
		cout << arr[i] << TAB;
	}
	cout << "\n\n";
	PAUSE;

	cout << "\n" << "Массив извлеченных нечетных значений: " << endl;
	for (int i = 0; i < countOdd; i++)
	{
		cout << odd[i] << TAB;
	}
	cout << "\n\n";

	cout << "Массив извлеченных четных значений: " << endl;
	for (int i = 0; i < countEven; i++)
	{
		cout << even[i] << TAB;
	}
	cout << endl;

	delete[] arr;
	delete[] odd;
	delete[] even;
}