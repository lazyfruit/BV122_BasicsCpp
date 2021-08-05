#include"ShiftLeft.h"

void ShiftLeft(int arr[], const int n)
{
	//Сдвиг массива влево
	int number_of_shiftl;
	cout << "Выберите количество сдвигов влево: "; cin >> number_of_shiftl;
	for (int i = 0; i < number_of_shiftl; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftLeft(double arr[], const int n)
{
	//Сдвиг массива влево
	int number_of_shiftl;
	cout << "Выберите количество сдвигов влево: "; cin >> number_of_shiftl;
	for (int i = 0; i < number_of_shiftl; i++)
	{
		double buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftLeft(short arr[], const int n)
{
	//Сдвиг массива влево
	int number_of_shiftl;
	cout << "Выберите количество сдвигов влево: "; cin >> number_of_shiftl;
	for (int i = 0; i < number_of_shiftl; i++)
	{
		short buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftLeft(float arr[], const int n)
{
	//Сдвиг массива влево
	int number_of_shiftl;
	cout << "Выберите количество сдвигов влево: "; cin >> number_of_shiftl;
	for (int i = 0; i < number_of_shiftl; i++)
	{
		float buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftLeft(char arr[], const int n)
{
	//Сдвиг массива влево
	int number_of_shiftl;
	cout << "Выберите количество сдвигов влево: "; cin >> number_of_shiftl;
	for (int i = 0; i < number_of_shiftl; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}