#include<iostream>
using namespace std;

//#define ELEVATOR
#define FACTORIAL
//#define POWER
//#define FIBONACCI

void Elevator(int floor);
int Factorial(int n);
double Power(int a, int n);
void Fibonacci(int n/*, int a, int b*/);

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef ELEVATOR
	int floor;
	cout << "Введите номер этажа: "; cin >> floor;
	Elevator(floor);
#endif // ELEVATOR

#ifdef FACTORIAL
	int n;
	cout << "Введите число: "; cin >> n;
	cout << "\n" << "Факториал числа: " << Factorial(n) << endl;
#endif // FACTORIAL

#ifdef POWER
	int a;
	int n;
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	cout << "\n" << "Полученное значение степени: " << Power(a, n) << endl;
#endif // POWER

#ifdef FIBONACCI
	int n;
	cout << "До какого предела вывести ряд Фибоначчи? "; cin >> n;
	cout << "\n" << "Полученный ряд Фибаначи в пределе до числа " << n << " :" << endl;
	Fibonacci(n);
	cout << endl;
#endif // FIBONACCI
}

void Elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << floor << endl;
	Elevator(floor - 1);
	cout << floor << endl;
}

int Factorial(int n)
{
	if (n == 0)return 1;
	int f = n * Factorial(n - 1);
	return f;
}

double Power(int a, int n)
{
	if (n == 0) return 1;
	if (n < 0)
	{
		return 1. / a * Power(a, n + 1);
	}
	return a * Power(a, n - 1);
	//Вариант записи №2
	//return n == 0 ? 1 : n > 0 ? a * Power(a, n - 1) : 1. / a * Power(a, n + 1);
}

void Fibonacci(int n/*, int a, int b*/)
{
	static int a = 0, b = 1, c = 1;
	if (a > n)return;
	cout << a << "\t";
	//Fibonacci(n, b, a + b);
	/*a = b;
	b = c;
	c = a + b;*/
	c = (a = b) + (b = c);
	Fibonacci(n);
}