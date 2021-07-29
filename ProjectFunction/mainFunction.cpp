#include<iostream>
using namespace std;

//Прототип, или объявление функции (
int Add(int a, int b);
int Sub(int a, int b);
int Mul(int a, int b);
double Div(double a, double b);

void main()
{
	setlocale(LC_ALL, "");

	int a, b;
	cout << "Введите 2 числа: "; cin >> a >> b;

	int c = Add(a, b); //Вызов, или использование функции (function call)
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a,b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
}

//Реализация, или 
int Add(int a, int b) //Addition (сложение)
{
	return a + b;
}
int Sub(int a, int b) //Subtraction (вычитание)
{
	return a - b;
}
int Mul(int a, int b) //Multipliction (умножение)
{
	return a * b;
}
double Div(double a, double b) //Division (деление)
{
	return a / b;
}