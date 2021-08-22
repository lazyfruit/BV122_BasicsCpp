#include<iostream>
#include<stdlib.h>
using namespace std;

#define TAB "\t"

#define HOME_WORK_19

void main()
{
	setlocale(LC_ALL, "Rus");

#ifdef HOME_WORK_19
	//���������� �������
	const int ARRAY_SIZE = 30;
	int array[ARRAY_SIZE];

	//����� ������������ � ������������� �������� ��� ���������� �������
	int minArrayNumber = 0;
	int maxArrayNumber = 10;

	//���������� (�������������) ������� ���������� ������� � �������� ��������� 
	for (int i = 0; i < ARRAY_SIZE; i++) array[i] = rand() % (maxArrayNumber - minArrayNumber) + minArrayNumber;

	//����� ������������ ������� �� �����
	cout << "\n" << "���������� ������: " << endl;
	for (int i = 0; i < ARRAY_SIZE; i++) cout << array[i] << TAB;
	cout << endl;

	//����� ������������� ��������
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		bool alreadyNumberThere = false;
		for (int j = 0; j < i; j++)
		{
			if (array[i] == array[j])
			{
				alreadyNumberThere = true;
				break;
			}
		}
		if (alreadyNumberThere) continue;

		int countRepeatNumber = 1;

		for (int j = i + 1; j < ARRAY_SIZE; j++)
		{
			if (array[i] == array[j]) countRepeatNumber++;
		}
		switch (countRepeatNumber)
		{
		case 2:
		case 3:
		case 4: printf("�������� %d ����������� %d ����\n", array[i], countRepeatNumber); break;
			//��� ����������� ������ ���������� �������� ��� ���� �������� ��������������� �� 2, 3 � 4,\
			�� ��� ����� ����� ������������ �� switch. � �������������� ���� �� ����, ����� �� ������� �����.\
			� ������ �������� ��������: ������� �������, min � max ������������� ��� ��������.
		default: printf("�������� %d ����������� %d ���\n", array[i], countRepeatNumber);
		}
	}
#endif // HOME_WORK_19
}