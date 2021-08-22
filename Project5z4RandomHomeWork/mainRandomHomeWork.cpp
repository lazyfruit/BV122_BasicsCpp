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
	//Объявление массива
	const int ARRAY_SIZE = 10;
	int array[ARRAY_SIZE];

	//Выбор минимального и максимального значения для заполнения массива
	int minArrayNumber;
	int maxArrayNumber;
	do
	{
		cout << "\n" << "Введите минимально возможное число: " << TAB; cin >> minArrayNumber;
		cout << "Введите максимально возможное число: " << TAB; cin >> maxArrayNumber;
		if (minArrayNumber >= maxArrayNumber) cout << "Будте внимательны, повторите ввод!" << endl;
	} while (minArrayNumber >= maxArrayNumber);

	//Заполнение (инициализация) массива случайными числами в заданном диапазоне 
	for (int i = 0; i < ARRAY_SIZE; i++) array[i] = rand() % (maxArrayNumber - minArrayNumber) + minArrayNumber;

	//Вывод заполненного массива на экран
	cout << "\n" << "Полученный массив: " << TAB;
	for (int i = 0; i < ARRAY_SIZE; i++) cout << array[i] << TAB;
	cout << endl;

	//Сортировка заполненного массива
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

	//Вывод отсортированоого массива
	cout << "\n" << "Cортированный массив: " << TAB;
	for (int i = 0; i < ARRAY_SIZE; i++) cout << array[i] << TAB;
	cout << endl;
#endif // HOME_WORK_18
}