#include"clear.h"

template<typename T>
void clear(T** arr, unsigned int& rows)
{
	//		�������� ���:
//1. ������� ������:
	for (int i = 0; i < rows; i++)
	{
		delete[]arr[i];
	}
	//2. ������� ������ ����������:
	delete[]arr;
}