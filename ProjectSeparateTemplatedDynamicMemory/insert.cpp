#include"insert.h"

template<typename T>
T* insert(T arr[], int& n, T value, int push_index)
{
	T* buffer = new T[n + 1];
	for (int i = 0; i < push_index; i++)
	{
		buffer[i] = arr[i];
	}
	for (int i = push_index + 1; i < n + 1; i++)
	{
		buffer[i] = arr[i - 1];
	}
	delete[] arr;
	arr = buffer;
	arr[push_index] = value;
	n++;
	return arr;
}

template<typename T>
void insert_row(T**& arr, unsigned int& rows, unsigned int& cols, unsigned int insert_row_index)
{
	T** buffer = new T * [rows + 1]{};
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = arr[i];
	}
	for (int i = insert_row_index + 1; i < rows + 1; i++)
	{
		buffer[i] = arr[i - 1];
	}
	delete[] arr;
	arr = buffer;
	arr[insert_row_index] = new T[cols]{};
	rows++;
}
template<typename T>
void insert_col(T** arr, unsigned int& rows, unsigned int& cols, unsigned int insert_col_index)
{
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols + 1]{};
		for (int j = 0; j < insert_col_index; j++)
		{
			buffer[j] = arr[i][j];
		}
		for (int j = insert_col_index + 1; j < cols + 1; j++)
		{
			buffer[j] = arr[i][j - 1];
		}
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols++;
}