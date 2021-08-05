#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void Sort(int arr[], const int n);
void Sum(int arr[], const int n);
void Avg(int arr[], const int n);
void minValueIn(int arr[], const int n);
void maxValueIn(int arr[], const int n);
void ShiftLeft(int arr[], const int n);
void ShiftRight(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	Sum(arr, n);
	Avg(arr, n);
	minValueIn(arr, n);
	maxValueIn(arr, n);
	ShiftLeft(arr, n);
	Print(arr, n);
	ShiftRight(arr, n);
	Print(arr, n);

	///////////////////////////////////////////

	const int B_SIZE = 8;
	int brr[B_SIZE];
	FillRand(brr, B_SIZE);
	Print(brr, B_SIZE);
	Sort(brr, B_SIZE);
	Print(brr, B_SIZE);
	Sum(brr, B_SIZE);
	Avg(brr, B_SIZE);
	minValueIn(brr, B_SIZE);
	maxValueIn(brr, B_SIZE);
	ShiftLeft(brr, B_SIZE);
	Print(brr, B_SIZE);
	ShiftRight(brr, B_SIZE);
	Print(brr, B_SIZE);
}

void FillRand(int arr[], const int n)
{
	//���������� ������� ���������� �������
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void Print(int arr[], const int n)
{
	//����� ������� �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Sort(int arr[], const int n)
{
	//���������� 
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sum(int arr[], const int n)
{
	//����� ���� ���������
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "����� ���� ��������� �������: " << sum << endl;
}

void Avg(int arr[], const int n)
{
	//������� �������������� ���� ���������
	double avg = 0;
	for (int i = 0; i < n; i++)
	{
		avg += arr[i];
	}
	cout << "������� �������������� ���� ���������: " << avg / n << endl;
}

void minValueIn(int arr[], const int n)
{
	//����������� �������� � �������
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	cout << "����������� �������� � �������: " << min << endl;
}

void maxValueIn(int arr[], const int n)
{
	//������������ �������� � �������
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	cout << "������������ �������� � �������: " << max << endl;
}

void ShiftLeft(int arr[], const int n)
{
	//����� ������� �����
	int number_of_shiftl;
	cout << "�������� ���������� ������� �����: "; cin >> number_of_shiftl;
	for (int i = 0; i < number_of_shiftl; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

void ShiftRight(int arr[], const int n)
{
	//����� ������� ������
	int number_of_shiftr;
	cout << "�������� ���������� ������� ������: "; cin >> number_of_shiftr;
	for (int i = 0; i < number_of_shiftr; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
