#include<iostream>
using namespace std;

#define PAUSE system("pause");

//Прототипы функций для одномерных массивов:
void FillRand(int arr[], const unsigned int n, int minRand = 0, int maxRand = 100);
void Print(int arr[], const unsigned int n);
int* push_back(int arr[], int& n, int value);
int* push_front(int arr[], int& n, int value);
int* pop_back(int arr[], int& n);
int* pop_front(int arr[], int& n);
int* insert(int arr[], int& n, int value, int push_index);
int* erase(int arr[], int& n, int pop_index);

//Прототипы функций для двумерных массивов:
void FillRand(int** arr, const unsigned int rows, const unsigned int cols, int minRand = 0, int maxRand = 100);
void Print(int** arr, const unsigned int rows, const unsigned int cols);
int** allocate(const unsigned int rows, const unsigned int cols);
void clear(int** arr, const unsigned int rows);
int** push_row_back(int** arr, unsigned int& rows, const unsigned int cols);
void push_col_back(int** arr, const unsigned int rows, unsigned int& cols);

#define DYNAMIC_MEMORY_1
//#define DYNAMIC_MEMORY_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef DYNAMIC_MEMORY_1
	int n;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n];
	FillRand(arr, n);

	cout << "\n" << "Полученный массив:" << endl;
	Print(arr, n);
	cout << endl;
	PAUSE;

	int value;

	cout << "\n" << "Введите значение которое нужно добавить в конец массива: "; cin >> value;
	cout << "\n" << "Измененный массив массив:" << endl;
	arr = push_back(arr, n, value);
	Print(arr, n);
	cout << endl;
	PAUSE;

	cout << "\n" << "Удаляем значение добавленное в конец массива чтобы не мешалось:" << endl;
	arr = pop_back(arr, n);
	Print(arr, n);

	cout << "\n" << "Введите значение которое нужно добавить в начало массива: "; cin >> value;
	cout << "\n" << "Измененный массив массив:" << endl;
	arr = push_front(arr, n, value);
	Print(arr, n);
	cout << endl;
	PAUSE;

	cout << "\n" << "Удаляем значение добавленное в начало массива чтобы не мешалось:" << endl;
	arr = pop_front(arr, n);
	Print(arr, n);

	int push_index;
	cout << "\n" << "Введите значение которое нужно добавить в массив: "; cin >> value;
	cout << "\n" << "Введите индекс позицию добавляемого элемента (нумерация элементов начинается с \"0\"): "; cin >> push_index;
	cout << "\n" << "Измененный массив массив:" << endl;
	arr = insert(arr, n, value, push_index);
	Print(arr, n);

	int pop_index;
	cout << "\n" << "Введите позицию удаляемого элемента (нумерация элементов начинается с \"0\"): "; cin >> pop_index;
	arr = erase(arr, n, pop_index);
	Print(arr, n);

	delete[] arr;
#endif // DYNAMIC_MEMORY_1

#ifdef DYNAMIC_MEMORY_2
	unsigned int rows;
	unsigned int cols;

	cout << "Введите количество строк: "; cin >> rows;
	cout << "Введите количество элементов строки: "; cin >> cols;

	int** arr = allocate(rows, cols);

	//Обращение к элементам ДДМ:
	FillRand(arr, rows, cols);
	Print(arr, rows, cols);
	cout << "\n--------------------------------------------------------------\n\n";

	arr = push_row_back(arr, rows, cols);
	FillRand(arr[rows - 1], cols, 200, 300);

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << *(*(arr + i) + j) << "\t";
		}
		cout << endl;
	}

	push_col_back(arr, rows, cols);
	for (int i = 0; i < rows; i++)arr[i][cols - 1] = rand();
	Print(arr, rows, cols);

	clear(arr, rows);
#endif // DYNAMIC_MEMORY_2
}

void FillRand(int arr[], const unsigned int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void Print(int arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
int* push_back(int arr[], int& n, int value)
{
	//Добавление элемента в массив:
	//1. Создаем буферный массив нужного размера:
	int* buffer = new int[n + 1];
	//2. Копируем исходный массив в буферный:
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3. Удаляем исходный массив:
	delete[] arr;
	//4. Подменяем исходный массив новым (буферным) массивом, за счет подмены адреса:
	arr = buffer;
	//5. Только после всех этих действий можно добавить значение в конец массива:
	arr[n] = value;
	//6. После добавления элемента в массив, количество его элементов увеличивается\
		на 1:
	n++;
	return arr;
}
int* push_front(int arr[], int& n, int value)
{
	//Добавление элемента в массив:
	//1. Создаем буферный массив нужного размера:
	int* buffer = new int[n + 1];
	//2. Копируем исходный массив в фуферный:
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];
	}
	//3. Удаляем исходный массив:
	delete[]arr;
	//4. Подменяем исходнй массив буферным массивом, за счет подмены адреса:
	arr = buffer;
	//5. Добавляем значение в начало массива:
	arr[0] = value;
	n++;

	return arr;
}
int* pop_back(int arr[], int& n)
{
	//Удаляем элемент в конце массива:
	//1. Создаем буферный массив нужного размера:
	int* buffer = new int[--n];
	//2. Копируем исходный массив в буферный без последнего элемента:
	for (int i = 0; i < n; i++) buffer[i] = arr[i];
	//3. Удаляем исходный массив:
	delete[]arr;

	return buffer;
}
int* pop_front(int arr[], int& n)
{
	//Удаляем элемент в конце массива:
	//1. Создаем буферный массив нужного размера:
	int* buffer = new int[--n];
	//2. Копируем исходный массив в буферный без последнего элемента:
	for (int i = 0; i < n; i++) buffer[i] = arr[i + 1];
	//3. Удаляем исходный массив:
	delete[]arr;

	return buffer;
}
int* insert(int arr[], int& n, int value, int push_index)
{
	int* buffer = new int[n + 1];
	for (int i = 0; i < push_index; i++)
	{
		buffer[i] = arr[i];
	}
	for (int i = push_index + 1; i < n + 1; i++)
	{
		buffer[i] = arr[i - 1];
	}
	delete[] arr;
	arr = buffer;
	arr[push_index] = value;
	n++;
	return arr;
}
int* erase(int arr[], int& n, int pop_index)
{
	int* buffer = new int[--n];
	for (int i = 0; i < pop_index; i++)
	{
		buffer[i] = arr[i];
	}
	for (int i = pop_index; i < n; i++)
	{
		buffer[i] = arr[i + 1];
	}
	delete[] arr;
	arr = buffer;
	return arr;
}

void FillRand(int** arr, const unsigned int rows, const unsigned int cols, int minRand, int maxRand)
{
	//		Заполнение ДДМ:
	for (int i = 0; i < rows; i++)
	{

		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
		cout << endl;
	}
}
void Print(int** arr, const unsigned int rows, const unsigned int cols)
{
	//		Обращение к элементам ДДМ:
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
int** allocate(const unsigned int rows, const unsigned int cols)
{
	//		Объявление динамического массива:
	//1. Объявляем указатель на указатель и сохраняем в него адрес массива указателей:
	int** arr = new int* [rows];
	//2. Создаем строки ДДМ:
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	return arr;
}
void clear(int** arr, const unsigned int rows)
{
	//		Удаление ДДМ:
//1. Удаляем строки:
	for (int i = 0; i < rows; i++)
	{
		delete[]arr[i];
	}
	//2. Удаляем массив указателей:
	delete[]arr;
}
int** push_row_back(int** arr, unsigned int& rows, const unsigned int cols)
{
	//1) Создаем буферный массив указателей:
	int** buffer = new int* [rows + 1]{};
	//2) Копируем адреса строк в буферный массив указателей:
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = arr[i];
	}
	//3) Удаляем исходный массив указателей:
	delete[] arr;
	//4) Подменяем исходный массив буферным:
	arr = buffer;
	//5) Добавляем в массив новую строку:
	arr[rows] = new int[cols] {};
	//6) Увеличиваем количество строк:
	rows++;
	//7) Возвращаем новый массив на место вызова:
	return arr;
}
void  push_col_back(int** arr, const unsigned int rows, unsigned int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		//1) Создаем буферную строку, размером на 1 элемент больше:
		int* buffer = new int[cols + 1]{};
		//2) Копируем исходную строку в буферную:
		for (int j = 0; j < cols; j++)
		{
			buffer[j] = arr[i][j];
		}
		//3) Удаляем исходную строку
		delete[] arr[i];
		arr[i] = buffer;
	}
	//4) После того, как в каждой строке добавилось по элементу, 
	//   количество столбцов увеличилось на 1:
	cols++;
}