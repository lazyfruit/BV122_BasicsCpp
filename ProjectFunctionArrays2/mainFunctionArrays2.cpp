#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);

void Print(int arr[], const int n);
void Print(double arr[], const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);

void ShiftLeft(int arr[], const int n);
void ShiftLeft(double arr[], const int n);

void ShiftRight(int arr[], const int n);
void ShiftRight(double arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");

	//Массив arr[n]
	cout << "Массив int arr[n]\n" << endl;
	const int n = 5;
	int arr[n];

	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма всех элементов: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов: " << Avg(arr, n) << endl;
	cout << "Минимальное значение всех элементов: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение всех элементов: " << maxValueIn(arr, n) << endl;
	ShiftLeft(arr, n);
	Print(arr, n);
	ShiftRight(arr, n);
	Print(arr, n);
	cout << endl;

	//Массив brr[B_SIZE]
	cout << "Массив int brr[B_SIZE]\n" << endl;
	const int B_SIZE = 8;
	double brr[B_SIZE];

	FillRand(brr, B_SIZE);
	Print(brr, B_SIZE);
	Sort(brr, B_SIZE);
	Print(brr, B_SIZE);
	cout << "Сумма всех элементов: " << Sum(brr, B_SIZE) << endl;
	cout << "Среднее арифметическое элементов: " << Avg(brr, B_SIZE) << endl;
	cout << "Минимальное значение всех элементов: " << minValueIn(brr, B_SIZE) << endl;
	cout << "Максимальное значение всех элементов: " << maxValueIn(brr, B_SIZE) << endl;
	ShiftLeft(brr, B_SIZE);
	Print(brr, B_SIZE);
	ShiftRight(brr, B_SIZE);
	Print(brr, B_SIZE);
	cout << endl;
}

void FillRand(int arr[], const int n)
{
	//Заполнение массива случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	//Заполнение массива случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 10000) / 100;
	}
}

void Print(int arr[], const int n)
{
	//Вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	//Вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Sort(int arr[], const int n)
{
	//Сортировка 
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
void Sort(double arr[], const int n)
{
	//Сортировка 
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

int Sum(int arr[], const int n)
{
	//Сумма всех элементов
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	//Сумма всех элементов
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	//Среднее арифметическое всех элементов
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	//Среднее арифметическое всех элементов
	return (double)Sum(arr, n) / n;
}

int minValueIn(int arr[], const int n)
{
	//Минимальное значение в массиве
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
double minValueIn(double arr[], const int n)
{
	//Минимальное значение в массиве
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

int maxValueIn(int arr[], const int n)
{
	//Максимальное значение в массиве
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
double maxValueIn(double arr[], const int n)
{
	//Максимальное значение в массиве
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

void ShiftLeft(int arr[], const int n)
{
	//Сдвиг массива влево
	int number_of_shiftl;
	cout << "Выберите количество сдвигов влево: "; cin >> number_of_shiftl;
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
void ShiftLeft(double arr[], const int n)
{
	//Сдвиг массива влево
	int number_of_shiftl;
	cout << "Выберите количество сдвигов влево: "; cin >> number_of_shiftl;
	for (int i = 0; i < number_of_shiftl; i++)
	{
		double buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

void ShiftRight(int arr[], const int n)
{
	//Сдвиг массива вправо
	int number_of_shiftr;
	cout << "Выберите количество сдвигов вправо: "; cin >> number_of_shiftr;
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
void ShiftRight(double arr[], const int n)
{
	//Сдвиг массива вправо
	int number_of_shiftr;
	cout << "Выберите количество сдвигов вправо: "; cin >> number_of_shiftr;
	for (int i = 0; i < number_of_shiftr; i++)
	{
		double buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}