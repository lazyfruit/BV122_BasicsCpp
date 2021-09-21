﻿#include<iostream>
using namespace std;

void FillRand(int arr[], const unsigned int n);
void Print(int arr[], const unsigned int n);

void push_back(int*& arr, int& n, int value);
void pop_back(int*& arr, int& n);

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n];
	FillRand(arr, n);
	Print(arr, n);
	int value;
	cout << "Введите добавляемое значение: "; cin >> value;
	
	push_back(arr, n, value);
	Print(arr, n);

	pop_back(arr, n);
	Print(arr, n);
	delete[] arr;
}

void FillRand(int arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void Print(int arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void push_back(int*& arr, int& n, int value)
{
	//Добавление элемента в массив:
	//1. Создаем буферный массив нужного размера:
	int* buffer = new int[n + 1];
	//2. Копируем исходный массив в буферный:
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3. Удалить исходный массив:
	delete[] arr;
	//4. Подменяем исходный массив новым (буферным) массивом, за счет подмены адреса:
	arr = buffer;
	//5. Только после всех этих действий можно добавить значение в конец массива:
	arr[n] = value;
	//6. После добавления элемента в массив, количество его элементов увеличивается\
		на 1:
	n++;
}

void pop_back(int*& arr, int& n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++) buffer[i] = arr[i];
	delete[]arr;
	arr = buffer;
}