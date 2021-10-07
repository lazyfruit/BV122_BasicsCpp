#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

#define PAUSE system("pause");

//Прототипы функций для одномерных массивов:
template<typename T>
void FillRand(T arr[], const unsigned int n, int minRand = 0, int maxRand = 100);
template<typename T>
void Print(T arr[], const unsigned int n);
template<typename T>
T* push_back(T arr[], int& n, T value);
template<typename T>
T* push_front(T arr[], int& n, T value);
template<typename T>
T* pop_back(T arr[], int& n);
template<typename T>
T* pop_front(T arr[], int& n);
template<typename T>
T* insert(T arr[], int& n, T value, int insert_index);
template<typename T>
T* erase(T arr[], int& n, int erase_index);
//Прототипы функций для двумерных массивов:
template<typename T>
void FillRand(T**& arr, const unsigned int rows, const unsigned int cols, int minRand = 0, int maxRand = 100);
template<typename T>
void Print(T** arr, const unsigned int rows, const unsigned int cols);
template<typename T>
T** allocate(unsigned int& rows, unsigned int& cols);
template<typename T>
void clear(T** arr, unsigned int& rows);
template<typename T>
void push_row_back(T**& arr, unsigned int& rows, unsigned int& cols);
template<typename T>
void push_row_front(T**& arr, unsigned int& rows, unsigned int& cols);
template<typename T>
void pop_row_back(T**& arr, unsigned int& rows, unsigned int& cols);
template<typename T>
void pop_row_front(T**& arr, unsigned int& rows, unsigned int& cols);
template<typename T>
void insert_row(T**& arr, unsigned int& rows, unsigned int& cols, unsigned int insert_row_index);
template<typename T>
void erase_row(T**& arr, unsigned int& rows, unsigned int& cols, unsigned int pop_row_index);
template<typename T>
void push_col_front(T** arr, unsigned int& rows, unsigned int& cols);
template<typename T>
void push_col_back(T** arr, unsigned int& rows, unsigned int& cols);
template<typename T>
void pop_col_back(T** arr, unsigned int& rows, unsigned int& cols);
template<typename T>
void pop_col_front(T** arr, unsigned int& rows, unsigned int& cols);
template<typename T>
void insert_col(T** arr, unsigned int& rows, unsigned int& cols, unsigned int insert_col_index);
template<typename T>
void erase_col(T**& arr, unsigned int& rows, unsigned int& cols, unsigned int pop_col_index);

//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef DYNAMIC_MEMORY_1
	int n;
	cout << "Введите размер массива: "; cin >> n;

	//Указание типа массива для шаблонных функций:
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
	cout << "Введите количество строк массива: "; cin >> rows;
	unsigned int cols;
	cout << "Введите количество столбцов массива: "; cin >> cols;

	cout << "\n" << "Полученный двумерный массив:";
	//Указание типа массива для шаблонных функций ДДМ:
	int** arr = allocate<int>(rows, cols);

	//Обращение к элементам ДДМ:
	FillRand(arr, rows, cols);
	Print(arr, rows, cols);
	cout << endl;
	PAUSE;

	cout << "\n--------------------------------------------------------------\n\n";
	cout << "Добавляем строку в начало массива:" << "\n\n";
	push_row_front(arr, rows, cols);
	FillRand(arr[0], cols, 200, 300);
	Print(arr, rows, cols);
	cout << endl;
	PAUSE;

	cout << "\n--------------------------------------------------------------\n\n";
	cout << "Удаляем строку с начала массива чтобы не мешала: " << "\n\n";
	pop_row_front(arr, rows, cols);
	Print(arr, rows, cols);
	cout << endl;
	PAUSE;

	cout << "\n--------------------------------------------------------------\n\n";
	cout << "Добавляем строку в конец массива: " << "\n\n";
	push_row_back(arr, rows, cols);
	FillRand(arr[rows - 1], cols, 200, 300);
	Print(arr, rows, cols);
	cout << endl;
	PAUSE;

	cout << "\n--------------------------------------------------------------\n\n";
	cout << "Удаляем строку с конца массива чтобы не мешала: " << "\n\n";
	pop_row_back(arr, rows, cols);
	Print(arr, rows, cols);
	cout << endl;
	PAUSE;

	int insert_row_index;
	cout << "\n--------------------------------------------------------------\n\n";
	cout << "В какую из " << rows << " позиций (начиная с 0) массива вы хотите добавить строку : "; cin >> insert_row_index;
	cout << "\n" << "Добавляем строку в " << insert_row_index << " позицию массива: " << "\n\n";
	insert_row(arr, rows, cols, insert_row_index);
	Print(arr, rows, cols);

	int erase_row_index;
	cout << "\n--------------------------------------------------------------\n\n";
	cout << "В какой из " << rows << " позиций (начиная с 0) массива вы хотите удилить строку: "; cin >> erase_row_index;
	cout << "\n" << "Удаляем строку из " << erase_row_index << " позиции массива: " << "\n\n";
	erase_row(arr, rows, cols, erase_row_index);
	Print(arr, rows, cols);
	cout << endl;
	PAUSE;

	cout << "\n--------------------------------------------------------------\n\n";
	cout << "Добавляем столбик в начало массива: " << "\n\n";
	push_col_front(arr, rows, cols);
	for (int i = 0; i < rows; i++)arr[i][0] = rand();
	Print(arr, rows, cols);
	cout << endl;
	PAUSE;

	cout << "\n--------------------------------------------------------------\n\n";
	cout << "Удаляем столбик в начале массива чтобы не мешал: " << "\n\n";
	pop_col_front(arr, rows, cols);
	Print(arr, rows, cols);
	cout << endl;
	PAUSE;

	cout << "\n--------------------------------------------------------------\n\n";
	cout << "Добавляем столбик в конец массива: " << "\n\n";
	push_col_back(arr, rows, cols);
	for (int i = 0; i < rows; i++)arr[i][cols - 1] = rand();
	Print(arr, rows, cols);
	cout << endl;
	PAUSE;

	cout << "\n--------------------------------------------------------------\n\n";
	cout << "Удаляем столбик в конце массива чтобы не мешал: " << "\n\n";
	pop_col_back(arr, rows, cols);
	Print(arr, rows, cols);
	cout << endl;
	PAUSE;

	int insert_col_index;
	cout << "\n--------------------------------------------------------------\n\n";
	cout << "В какую из " << cols << " позиций (начиная с 0) массива вы хотите добавить столбик : "; cin >> insert_col_index;
	cout << "\n" << "Добавляем столбик в " << insert_col_index << " позицию массива: " << "\n\n";
	insert_col(arr, rows, cols, insert_col_index);
	Print(arr, rows, cols);
	cout << endl;
	PAUSE;

	int erase_col_index;
	cout << "\n--------------------------------------------------------------\n\n";
	cout << "В какой из " << cols << " позиций (начиная с 0) массива вы хотите удалить столбик: "; cin >> erase_col_index;
	cout << "\n" << "Удаляем столбик из " << erase_col_index << " позиции массива: " << "\n\n";
	erase_col(arr, rows, cols, erase_col_index);
	Print(arr, rows, cols);
	clear(arr, rows);
#endif // DYNAMIC_MEMORY_2
}
//Реализации функций для одномерных массивов:
template<typename T>
void FillRand(T arr[], const unsigned int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
template<typename T>
void Print(T arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename T>
T* push_back(T arr[], int& n, T value)
{
	//Добавление элемента в массив:
	//1. Создаем буферный массив нужного размера:
	T* buffer = new T[n + 1];
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
template<typename T>
T* push_front(T arr[], int& n, T value)
{
	//Добавление элемента в массив:
	//1. Создаем буферный массив нужного размера:
	T* buffer = new T[n + 1];
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
template<typename T>
T* pop_back(T arr[], int& n)
{
	//Удаляем элемент в конце массива:
	//1. Создаем буферный массив нужного размера:
	T* buffer = new T[--n];
	//2. Копируем исходный массив в буферный без последнего элемента:
	for (int i = 0; i < n; i++) buffer[i] = arr[i];
	//3. Удаляем исходный массив:
	delete[]arr;

	return buffer;
}
template<typename T>
T* pop_front(T arr[], int& n)
{
	//Удаляем элемент в конце массива:
	//1. Создаем буферный массив нужного размера:
	T* buffer = new T[--n];
	//2. Копируем исходный массив в буферный без последнего элемента:
	for (int i = 0; i < n; i++) buffer[i] = arr[i + 1];
	//3. Удаляем исходный массив:
	delete[]arr;

	return buffer;
}
template<typename T>
T* insert(T arr[], int& n, T value, int push_index)
{
	T* buffer = new T[n + 1];
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
template<typename T>
T* erase(T arr[], int& n, int pop_index)
{
	T* buffer = new T[--n];
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
//Реализации функций для двумерных массивов:
template<typename T>
void FillRand(T**& arr, const unsigned int rows, const unsigned int cols, int minRand, int maxRand)
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
template<typename T>
void Print(T** arr, const unsigned int rows, const unsigned int cols)
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
template<typename T>
T** allocate(unsigned int& rows, unsigned int& cols)
{
	//		Объявление динамического массива:
	//1. Объявляем указатель на указатель и сохраняем в него адрес массива указателей:
	T** arr = new T * [rows];
	//2. Создаем строки ДДМ:
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new T[cols]{};
	}
	return arr;
}
template<typename T>
void clear(T** arr, unsigned int& rows)
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
template<typename T>
void push_row_back(T**& arr, unsigned int& rows, unsigned int& cols)
{
#ifdef OLD
	//1) Создаем буферный массив указателей:
	T** buffer = new T * [rows + 1]{};
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
	arr[rows] = new T[cols]{};
	//6) Увеличиваем количество строк:
	rows++;
#endif // OLD
	return push_back(arr, rows, new T[cols]{});
}
template<typename T>
void push_row_front(T**& arr, unsigned int& rows, unsigned int& cols)
{
	T** buffer = new T * [rows + 1]{};
	for (int i = 0; i < rows; i++)
	{
		buffer[i + 1] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	arr[0] = new T[cols]{};
	rows++;
}
template<typename T>
void pop_row_back(T**& arr, unsigned int& rows, unsigned int& cols)
{
	T** buffer = new T * [--rows]{};
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr[rows];
	delete[] arr;
	arr = buffer;
}
template<typename T>
void pop_row_front(T**& arr, unsigned int& rows, unsigned int& cols)
{
	T** buffer = new T * [--rows]{};
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = arr[i + 1];
	}
	delete[] arr[0];
	delete[] arr;
	arr = buffer;
}
template<typename T>
void insert_row(T**& arr, unsigned int& rows, unsigned int& cols, unsigned int insert_row_index)
{
	T** buffer = new T * [rows + 1]{};
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = arr[i];
	}
	for (int i = insert_row_index + 1; i < rows + 1; i++)
	{
		buffer[i] = arr[i - 1];
	}
	delete[] arr;
	arr = buffer;
	arr[insert_row_index] = new T[cols]{};
	rows++;
}
template<typename T>
void erase_row(T**& arr, unsigned int& rows, unsigned int& cols, unsigned int erase_row_index)
{
	T** buffer = new T * [--rows]{};
	for (int i = 0; i < erase_row_index; i++)
	{
		buffer[i] = arr[i];
	}
	for (int i = erase_row_index; i < rows; i++)
	{
		buffer[i] = arr[i + 1];
	}
	delete[] arr;
	arr = buffer;
}
template<typename T>
void push_col_back(T** arr, unsigned int& rows, unsigned int& cols)
{
	for (int i = 0; i < rows; i++)
	{
#ifdef OLD_COL
		//1) Создаем буферную строку, размером на 1 элемент больше:
		T* buffer = new T[cols + 1]{};
		//2) Копируем исходную строку в буферную:
		for (int j = 0; j < cols; j++)
		{
			buffer[j] = arr[i][j];
		}
		//3) Удаляем исходную строку
		delete[] arr[i];
		arr[i] = buffer;
#endif // OLD_COL
		arr[i] = push_back(arr[i], cols, T()); //T - значение по умолчанию для типа T
		cols--;
	}
	//4) После того, как в каждой строке добавилось по элементу, 
	//   количество столбцов увеличилось на 1:
	cols++;
}
template<typename T>
void push_col_front(T** arr, unsigned int& rows, unsigned int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		//1) Создаем буферную строку, размером на 1 элемент больше:
		T* buffer = new T[cols + 1]{};
		//2) Копируем исходную строку в буферную:
		for (int j = 0; j < cols; j++)
		{
			buffer[j + 1] = arr[i][j];
		}
		//3) Удаляем исходную строку
		delete[] arr[i];
		arr[i] = buffer;
	}
	//4) После того, как в каждой строке добавилось по элементу, 
	//   количество столбцов увеличилось на 1:
	cols++;
}
template<typename T>
void pop_col_back(T** arr, unsigned int& rows, unsigned int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols - 1]{};
		for (int j = 0; j < cols - 1; j++)
		{
			buffer[j] = arr[i][j];
		}
		delete[] arr[i];
		arr[i] = buffer;
	}
	--cols;
}
template<typename T>
void pop_col_front(T** arr, unsigned int& rows, unsigned int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols - 1]{};
		for (int j = 0; j < cols - 1; j++)
		{
			buffer[j] = arr[i][j + 1];
		}
		delete[] arr[i];
		arr[i] = buffer;
	}
	--cols;
}
template<typename T>
void insert_col(T** arr, unsigned int& rows, unsigned int& cols, unsigned int insert_col_index)
{
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols + 1]{};
		for (int j = 0; j < insert_col_index; j++)
		{
			buffer[j] = arr[i][j];
		}
		for (int j = insert_col_index + 1; j < cols + 1; j++)
		{
			buffer[j] = arr[i][j - 1];
		}
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols++;
}
template<typename T>
void erase_col(T**& arr, unsigned int& rows, unsigned int& cols, unsigned int erase_row_index)
{
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols - 1];
		for (int j = 0; j < erase_row_index; j++)
		{
			buffer[j] = arr[i][j];
		}
		for (int j = erase_row_index; j < cols - 1; j++)
		{
			buffer[j] = arr[i][j + 1];
		}
		delete[] arr[i];
		arr[i] = buffer;
	}
	--cols;
}