#include"ShiftRight.h"

void ShiftRight(int arr[], const int n)
{
	//Сдвиг массива вправо
	int number_of_shiftr;
	cout << "Выберите количество сдвигов вправо: "; cin >> number_of_shiftr;
	for (int i = 0; i < number_of_shiftr; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void ShiftRight(double arr[], const int n)
{
	//Сдвиг массива вправо
	int number_of_shiftr;
	cout << "Выберите количество сдвигов вправо: "; cin >> number_of_shiftr;
	for (int i = 0; i < number_of_shiftr; i++)
	{
		double buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void ShiftRight(short arr[], const int n)
{
	//Сдвиг массива вправо
	int number_of_shiftr;
	cout << "Выберите количество сдвигов вправо: "; cin >> number_of_shiftr;
	for (int i = 0; i < number_of_shiftr; i++)
	{
		short buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void ShiftRight(float arr[], const int n)
{
	//Сдвиг массива вправо
	int number_of_shiftr;
	cout << "Выберите количество сдвигов вправо: "; cin >> number_of_shiftr;
	for (int i = 0; i < number_of_shiftr; i++)
	{
		float buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void ShiftRight(char arr[], const int n)
{
	//Сдвиг массива вправо
	int number_of_shiftr;
	cout << "Выберите количество сдвигов вправо: "; cin >> number_of_shiftr;
	for (int i = 0; i < number_of_shiftr; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}