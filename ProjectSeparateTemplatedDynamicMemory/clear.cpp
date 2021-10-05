#include"clear.h"

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