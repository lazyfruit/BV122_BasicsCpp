#include"push.h"

template<typename T>
T* push_back(T arr[], int& n, T value)
{
	//���������� �������� � ������:
	//1. ������� �������� ������ ������� �������:
	T* buffer = new T[n + 1];
	//2. �������� �������� ������ � ��������:
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3. ������� �������� ������:
	delete[] arr;
	//4. ��������� �������� ������ ����� (��������) ��������, �� ���� ������� ������:
	arr = buffer;
	//5. ������ ����� ���� ���� �������� ����� �������� �������� � ����� �������:
	arr[n] = value;
	//6. ����� ���������� �������� � ������, ���������� ��� ��������� �������������\
		�� 1:
	n++;
	return arr;
}
template<typename T>
T* push_front(T arr[], int& n, T value)
{
	//���������� �������� � ������:
	//1. ������� �������� ������ ������� �������:
	T* buffer = new T[n + 1];
	//2. �������� �������� ������ � ��������:
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];
	}
	//3. ������� �������� ������:
	delete[]arr;
	//4. ��������� ������� ������ �������� ��������, �� ���� ������� ������:
	arr = buffer;
	//5. ��������� �������� � ������ �������:
	arr[0] = value;
	n++;

	return arr;
}

template<typename T>
void push_row_back(T**& arr, unsigned int& rows, unsigned int& cols)
{
	//1) ������� �������� ������ ����������:
	T** buffer = new T * [rows + 1]{};
	//2) �������� ������ ����� � �������� ������ ����������:
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = arr[i];
	}
	//3) ������� �������� ������ ����������:
	delete[] arr;
	//4) ��������� �������� ������ ��������:
	arr = buffer;
	//5) ��������� � ������ ����� ������:
	arr[rows] = new T[cols]{};
	//6) ����������� ���������� �����:
	rows++;
}
template<typename T>
void push_row_front(T**& arr, unsigned int& rows, unsigned int& cols)
{
	T** buffer = new T * [rows + 1]{};
	for (int i = 0; i < rows; i++)
	{
		buffer[i + 1] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	arr[0] = new T[cols]{};
	rows++;
}
template<typename T>
void push_col_back(T** arr, unsigned int& rows, unsigned int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		//1) ������� �������� ������, �������� �� 1 ������� ������:
		T* buffer = new T[cols + 1]{};
		//2) �������� �������� ������ � ��������:
		for (int j = 0; j < cols; j++)
		{
			buffer[j] = arr[i][j];
		}
		//3) ������� �������� ������
		delete[] arr[i];
		arr[i] = buffer;
	}
	//4) ����� ����, ��� � ������ ������ ���������� �� ��������, 
	//   ���������� �������� ����������� �� 1:
	cols++;
}
template<typename T>
void push_col_front(T** arr, unsigned int& rows, unsigned int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		//1) ������� �������� ������, �������� �� 1 ������� ������:
		T* buffer = new T[cols + 1]{};
		//2) �������� �������� ������ � ��������:
		for (int j = 0; j < cols; j++)
		{
			buffer[j + 1] = arr[i][j];
		}
		//3) ������� �������� ������
		delete[] arr[i];
		arr[i] = buffer;
	}
	//4) ����� ����, ��� � ������ ������ ���������� �� ��������, 
	//   ���������� �������� ����������� �� 1:
	cols++;
}