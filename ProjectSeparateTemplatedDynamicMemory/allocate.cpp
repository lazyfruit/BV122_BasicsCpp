#include"allocate.h"

template<typename T>
T** allocate(unsigned int& rows, unsigned int& cols)
{
	//		ќбъ€вление динамического массива:
	//1. ќбъ€вл€ем указатель на указатель и сохран€ем в него адрес массива указателей:
	T** arr = new T * [rows];
	//2. —оздаем строки ƒƒћ:
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new T[cols]{};
	}
	return arr;
}