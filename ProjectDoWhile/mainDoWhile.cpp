#include<iostream>
#include<conio.h>
using namespace std;

#define tab "\t"
#define Escape 27

void main()
{
	setlocale(LC_ALL, "Russian");

	char key; //����� ������� ��� �������
	do
	{
		key = _getch();
		cout << (int)key << tab << key << endl;
	} while (key != 27);
}