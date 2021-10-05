#include"pop.h"

template<typename T>
T* pop_back(T arr[], int& n)
{
	//Удаляем элемент в конце массива:
	//1. Создаем буферный массив нужного размера:
	T* buffer = new T[--n];
	//2. Копируем исходный массив в буферный без последнего элемента:
	for (int i = 0; i < n; i++) buffer[i] = arr[i];
	//3. Удаляем исходный массив:
	delete[]arr;

	return buffer;
}
template<typename T>
T* pop_front(T arr[], int& n)
{
	//Удаляем элемент в конце массива:
	//1. Создаем буферный массив нужного размера:
	T* buffer = new T[--n];
	//2. Копируем исходный массив в буферный без последнего элемента:
	for (int i = 0; i < n; i++) buffer[i] = arr[i + 1];
	//3. Удаляем исходный массив:
	delete[]arr;

	return buffer;
}

template<typename T>
void pop_row_back(T**& arr, unsigned int& rows, unsigned int& cols)
{
	T** buffer = new T * [--rows]{};
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr[rows];
	delete[] arr;
	arr = buffer;
}
template<typename T>
void pop_row_front(T**& arr, unsigned int& rows, unsigned int& cols)
{
	T** buffer = new T * [--rows]{};
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = arr[i + 1];
	}
	delete[] arr[0];
	delete[] arr;
	arr = buffer;
}
template<typename T>
void pop_col_back(T** arr, unsigned int& rows, unsigned int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols - 1]{};
		for (int j = 0; j < cols - 1; j++)
		{
			buffer[j] = arr[i][j];
		}
		delete[] arr[i];
		arr[i] = buffer;
	}
	--cols;
}
template<typename T>
void pop_col_front(T** arr, unsigned int& rows, unsigned int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols - 1]{};
		for (int j = 0; j < cols - 1; j++)
		{
			buffer[j] = arr[i][j + 1];
		}
		delete[] arr[i];
		arr[i] = buffer;
	}
	--cols;
}