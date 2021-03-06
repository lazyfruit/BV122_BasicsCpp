#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void Sort(int arr[], const int n);

//С использованиeм функций:

void main()
{
	setlocale(LC_ALL, "");

	const int n = 5;
	int arr[n];

	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);

	//////////////////////////////////////////////////////////////
	const int B_SIZE = 8;
	int brr[B_SIZE];

	FillRand(brr, B_SIZE);
	Print(brr, B_SIZE);
	Sort(brr, B_SIZE);
	Print(brr, B_SIZE);
}

//Без ипользования функций:

//void main()
//{
//	setlocale(LC_ALL, "");
// 
//	const int n = 5;
//	int arr[n];
//
//	//Заполнение массива случайными числами:
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = rand() % 100;
//	}
//
//	//Вывод массива на экран:
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	cout << endl;
//
//	//Сортировка:
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (arr[j] < arr[i])
//			{
//				int buffer = arr[i];
//				arr[i] = arr[j];
//				arr[j] = buffer;
//			}
//		}
//	}
//
//	//Вывод массива на экран:
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	cout << endl;
//
//	//////////////////////////////////////////////////////////////
//	const int B_SIZE = 8;
//	int brr[B_SIZE];
//
//	//Заполнение массива случайными числами:
//	for (int i = 0; i < B_SIZE; i++)
//	{
//		brr[i] = rand() % 100;
//	}
//
//	//Вывод массива на экран:
//	for (int i = 0; i < B_SIZE; i++)
//	{
//		cout << brr[i] << "\t";
//	}
//	cout << endl;
//
//	//Сортировка:
//	for (int i = 0; i < B_SIZE; i++)
//	{
//		for (int j = i + 1; j < B_SIZE; j++)
//		{
//			if (brr[j] < brr[i])
//			{
//				int buffer = brr[i];
//				brr[i] = brr[j];
//				brr[j] = buffer;
//			}
//		}
//	}
//
//	//Вывод массива на экран:
//	for (int i = 0; i < B_SIZE; i++)
//	{
//		cout << brr[i] << "\t";
//	}
//	cout << endl;
//}

void FillRand(int arr[], const int n)
{
	//Заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void Print(int arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Sort(int arr[], const int n)
{
	//Сортировка:
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}