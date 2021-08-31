#include<iostream>
using namespace std;

#define TAB "\t"

//#define POINTERS_BASICS

void main()
{
	setlocale(LC_ALL, "Rus");

#ifdef POINTERS_BASICS
	int a = 2;
	int* pa = &a;//Объявление и инициализация указателя
	cout << a << endl;//Вывод значения переменной 'a' на экран
	cout << &a << endl;//Взятие адреса переменной 'a' прямо при выводе
	cout << pa << endl;//Вывод адреса переменной 'a' хранящегося в указателе 'pa'
	cout << *pa << endl;//Вывод значения переменной 'a' через разыменованние указателя 'pa'

	int* pb;//Объявление указателя
	int b = 3;
	pb = &b;//Инициализация указателя
#endif // POINTERS_BASICS

	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << arr << endl;
	cout << *arr << endl;

	for (int i = 0; i < n; i++)
	{
		cout << arr + i << "\n";
	}
	cout << endl;
}