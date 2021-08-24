#include<iostream>
using namespace std;

#define TAB "\t"

#define SORT_1
#define SORT_2

void main()
{
	setlocale(LC_ALL, "Russian");
	const int ROWS = 8;
	const int COLS = 5;
	int array[ROWS][COLS] = {};

	//����� ������������ � ������������� �������� ��� ���������� �������
	int minArrayNumber;
	int maxArrayNumber;
	do
	{
		cout << "\n" << "������� ���������� ��������� �����: " << TAB; cin >> minArrayNumber;
		cout << "������� ����������� ��������� �����: " << TAB; cin >> maxArrayNumber;
		if (minArrayNumber >= maxArrayNumber) cout << "����� �����������, ��������� ����!" << endl;
	} while (minArrayNumber >= maxArrayNumber);

	//���������� ������� ���������� ������� � �������� ���������
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			array[i][j] = rand() % (maxArrayNumber - minArrayNumber) + minArrayNumber;
		}
	}

	//����� ������������ ������� �� �����
	cout << "\n" << "�������� ������: " << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << array[i][j] << TAB;
		}
		cout << endl;
	}

	int iterations = 0;
	int exchanges = 0;

#ifdef SORT_1
	//���������� ������� � 1
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (array[i][j] > array[k][l])
					{
						int buffer = array[i][j];
						array[i][j] = array[k][l];
						array[k][l] = buffer;
						exchanges++;
					}
					iterations++;
				}
			}
		}
	}
	cout << "\n" << "���������� ��������� �� " << iterations << " ��������," << endl;
	cout << "��� ���� ��������� " << exchanges << " ������ ���������." << endl;
#endif // SORT_1


#ifdef SORT_2
	//���������� ������� � 2
	for (int i = 0; i < ROWS * COLS; i++)
	{
		for (int j = 0; j < ROWS * COLS; j++)
		{
			if (array[0][j] > array[0][i])
			{
				int buffer = array[0][i];
				array[0][i] = array[0][j];
				array[0][j] = buffer;
				exchanges++;
			}
			iterations++;
		}
	}
	cout << "\n" << "���������� ��������� �� " << iterations << " ��������" << endl;
	cout << "��� ���� ��������� " << exchanges << " ������ ���������." << endl;
#endif // SORT_2

	//����� ���������������� �������
	cout << "\n" << "��������������� ������: " << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << array[i][j] << TAB;
		}
		cout << endl;
	}
}