#include<iostream>
#include<Windows.h>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int StringLength(char str[]);

void main()
{
	setlocale(LC_ALL, "");

	//char str[] = { 'H', 'e', 'l','l','o', 0 };
	/*char str[] = "Hello";*/
	const int n = 20;
	char str[n]{};
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введите строку: ";
	cin.getline(str, n);
	cout << str << endl;
	StringLength(///);
}

int StringLength(char str[])
{
	cout << sizeof(///);
}