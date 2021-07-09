#include<iostream>
using namespace std;

# define tab "\t"

void main()
{
	setlocale(LC_ALL, "Russian");

	int n;
	cout << "Введите количество итераций: "; cin >> n;
	for (int i = 0;
		i < n;
		i++)
	{
		cout << i << tab;
	}
	cout << endl;

}