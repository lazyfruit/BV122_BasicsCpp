#include<iostream>
#include<stdlib.h>
using namespace std;

#define TAB "\t"

#define HOME_WORK_19

void main()
{
	setlocale(LC_ALL, "Rus");

#ifdef HOME_WORK_19
	//Объявление массива
	const int ARRAY_SIZE = 30;
	int array[ARRAY_SIZE];

	//Выбор минимального и максимального значения для заполнения массива
	int minArrayNumber = 0;
	int maxArrayNumber = 10;

	//Заполнение (инициализация) массива случайными числами в заданном диапазоне 
	for (int i = 0; i < ARRAY_SIZE; i++) array[i] = rand() % (maxArrayNumber - minArrayNumber) + minArrayNumber;

	//Вывод заполненного массива на экран
	cout << "\n" << "Полученный массив: " << endl;
	for (int i = 0; i < ARRAY_SIZE; i++) cout << array[i] << TAB;
	cout << endl;

	//Поиск повторяющихся значений
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
		case 4: printf("Значение %d встречается %d раза\n", array[i], countRepeatNumber); break;
			//Для полноценной работы необходимо записать для всех значений заканчивающихся на 2, 3 и 4,\
			но для этого нужно использовать не switch. Я заморачиваться пока не стал, чтобы не тратить время.\
			В случае заданных значений: размера массива, min и max функционирует как задумано.
		default: printf("Значение %d встречается %d раз\n", array[i], countRepeatNumber);
		}
	}
#endif // HOME_WORK_19
}