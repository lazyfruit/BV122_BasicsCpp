#include<iostream>
#include<stdlib.h>
using namespace std;

#define TAB "\t"
#define PAUSE system("PAUSE")
#define CLEAR system("CLS")

#define HOME_WORK_18

void main()
{
	setlocale(LC_ALL, "Rus");

#ifdef HOME_WORK_18
	//���������� �������
	const int ARRAY_SIZE = 10;
	int array[ARRAY_SIZE];

	//����� ������������ � ������������� �������� ��� ���������� �������
	int minArrayNumber;
	int maxArrayNumber;
	do
	{
		cout << "\n" << "������� ���������� ��������� �����: " << TAB; cin >> minArrayNumber;
		cout << "������� ����������� ��������� �����: " << TAB; cin >> maxArrayNumber;
		if (minArrayNumber >= maxArrayNumber) cout << "����� �����������, ��������� ����!" << endl;
	} while (minArrayNumber >= maxArrayNumber);

	//���������� (�������������) ������� ���������� ������� � �������� ��������� 
	for (int i = 0; i < ARRAY_SIZE; i++) array[i] = rand() % (maxArrayNumber - minArrayNumber) + minArrayNumber;

	//����� ������������ ������� �� �����
	cout << "\n" << "���������� ������: " << TAB;
	for (int i = 0; i < ARRAY_SIZE; i++) cout << array[i] << TAB;
	cout << endl;

	//���������� ������������ �������
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		for (int j = i + 1; j < ARRAY_SIZE; j++)
		{
			if (array[j] < array[i])
			{
				int buffer = array[i];
				array[i] = array[j];
				array[j] = buffer;
			}
		}
	}

	//����� ���������������� �������
	cout << "\n" << "C������������ ������: " << TAB;
	for (int i = 0; i < ARRAY_SIZE; i++) cout << array[i] << TAB;
	cout << endl;
#endif // HOME_WORK_18
}