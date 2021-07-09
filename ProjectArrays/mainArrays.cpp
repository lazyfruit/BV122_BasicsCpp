#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Rus");

	const int SIZE = 5;
	int arr[SIZE] = { 3, 5, 8 };

	//Ввод элементов массива с клавиатуры:
	cout << "Введите значения элементов: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}

	//Вывод массива на экран:
	cout << "Полученный массив : " << tab;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//Вывод массива на экран в обратном порядке (от последнего элемента к первому):
	cout << "Обратный массив : " << tab;
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//Вывод суммы значения элементов:
	double sumNumber = 0;

	for (int i = 0; i < SIZE; i++)
	{
		sumNumber += arr[i];
	}
	cout << "Сумма значений элементов массива = " << sumNumber << endl;
	cout << "Среднее значение всех значений элементов массива = " << sumNumber / SIZE << endl;
}