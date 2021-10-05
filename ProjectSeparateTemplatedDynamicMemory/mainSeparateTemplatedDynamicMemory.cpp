#include"StdAfx.h"
#include"allocate.h"
#include"allocate.cpp"
#include"clear.h"
#include"clear.cpp"
#include"FillRand.h"
#include"FillRand.cpp"
#include"Print.h"
#include"Print.cpp"
#include"push.h"
#include"push.cpp"
#include"pop.h"
#include"pop.cpp"
#include"insert.h"
#include"insert.cpp"
#include"erase.h"
#include"erase.cpp"

#define PAUSE system("pause");

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