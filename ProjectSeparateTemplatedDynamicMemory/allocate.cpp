#include"allocate.h"

template<typename T>
T** allocate(unsigned int& rows, unsigned int& cols)
{
	//		���������� ������������� �������:
	//1. ��������� ��������� �� ��������� � ��������� � ���� ����� ������� ����������:
	T** arr = new T * [rows];
	//2. ������� ������ ���:
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new T[cols]{};
	}
	return arr;
}