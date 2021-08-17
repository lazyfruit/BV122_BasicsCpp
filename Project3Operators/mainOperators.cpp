#include<iostream>
using namespace std;

//#define ARITHMETICAL_OPERATORS
//#define ASSIGNMENT_OPERATOR //Оператор присваивания
#define INCREMENT_DECREMENT

void name()
{
	setlocale(LC_ALL, "Russian");

#ifdef ARITHMETICAL_OPERATORS
	int a = 17;
	int b = 5;
	cout << "Результат от деления: " << b / a << endl;
	cout << "Остаток от деления: " << b % a << endl;
#endif // ARITHMETICAL_OPERATORS

#ifdef ASSIGNMENT_OPERATOR
	int a = 2;
	int b = a + 3;
#endif // ASSIGNMENT_OPERATOR

#ifdef INCREMENT_DECREMENT
	//int i = 3;
	//int j = i++;
	//cout << i << endl;
	//cout << j << endl;

	//int i = 3;
	//i = ++i + ++i;
	//cout << i << endl;

	int i = 3;
	i = ++i + i++;
	cout << i << endl;
#endif // INCREMENT_DECREMENT
}