#include"erase.h"

template<typename T>
T* erase(T arr[], int& n, int pop_index)
{
	T* buffer = new T[--n];
	for (int i = 0; i < pop_index; i++)
	{
		buffer[i] = arr[i];
	}
	for (int i = pop_index; i < n; i++)
	{
		buffer[i] = arr[i + 1];
	}
	delete[] arr;
	arr = buffer;
	return arr;
}

template<typename T>
void erase_row(T**& arr, unsigned int& rows, unsigned int& cols, unsigned int erase_row_index)
{
	T** buffer = new T * [--rows]{};
	for (int i = 0; i < erase_row_index; i++)
	{
		buffer[i] = arr[i];
	}
	for (int i = erase_row_index; i < rows; i++)
	{
		buffer[i] = arr[i + 1];
	}
	delete[] arr;
	arr = buffer;
}
template<typename T>
void erase_col(T**& arr, unsigned int& rows, unsigned int& cols, unsigned int erase_row_index)
{
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols - 1];
		for (int j = 0; j < erase_row_index; j++)
		{
			buffer[j] = arr[i][j];
		}
		for (int j = erase_row_index; j < cols - 1; j++)
		{
			buffer[j] = arr[i][j + 1];
		}
		delete[] arr[i];
		arr[i] = buffer;
	}
	--cols;
}