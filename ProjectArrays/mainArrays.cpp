#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Rus");

	const int SIZE = 5;
	int arr[SIZE] = { 3, 5, 8 };

	//���� ��������� ������� � ����������:
	cout << "������� �������� ���������: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}

	//����� ������� �� �����:
	cout << "���������� ������ : " << tab;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//����� ������� �� ����� � �������� ������� (�� ���������� �������� � �������):
	cout << "�������� ������ : " << tab;
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//����� ����� �������� ���������:
	double sumNumber = 0;

	for (int i = 0; i < SIZE; i++)
	{
		sumNumber += arr[i];
	}
	cout << "����� �������� ��������� ������� = " << sumNumber << endl;
	cout << "������� �������� ���� �������� ��������� ������� = " << sumNumber / SIZE << endl;
}