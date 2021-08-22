#include<iostream>
using namespace std;

#define TAB "\t"
#define DECIMAL_TO_BINARY_CONVERSION
#define DECIMAL_TO_HEXADECIMAL_CONVERSION

void main()
{
	setlocale(LC_ALL, "Rus");

#ifdef DECIMAL_TO_BINARY_CONVERSION
	cout << TAB << "������� �� ���������� � �������� ������� ���������:" << "\n" << endl;
	const int MAX_BIN_DIGIT = 64; //������������ ����������� ��������� �����
	bool binaryArray[MAX_BIN_DIGIT] = {}; //���� ������ ����� ������� ������� ��������� �����
	unsigned long long int decimal_1; //���������� �����, �������� � ����������
	cout << "������� ���������� �����: "; cin >> decimal_1;


	cout << "���������� �������� �����: ";
	int i1 = 0; //C������ �������
	for (; decimal_1; decimal_1 /= 2) binaryArray[i1++] = decimal_1 % 2;
	for (--i1; i1 >= 0; i1--)
	{
		cout << binaryArray[i1];
		if (i1 % 8 == 0) cout << " ";
		if (i1 % 4 == 0) cout << " ";
	}
	cout << "\n\n";
	system("PAUSE");
#endif // DECIMAL_TO_BINARY_CONVERSION

#ifdef DECIMAL_TO_HEXADECIMAL_CONVERSION
	cout << "\n" << TAB << "������� �� ���������� � ����������������� ������� ���������:" << "\n" << endl;
	const int MAX_HEX_DIGITS = 8; //������������ ����������� ������������������ �����
	char hexadecimalArray[MAX_HEX_DIGITS] = {}; //���� ������ ����� ������� ������� ������������������ �����
	unsigned int decimal_2;  //���������� �����, �������� � �����������
	cout << "������� ���������� �����: "; cin >> decimal_2;

	cout << "���������� ����������������� �����: ";
	int i2 = 0; //C������ �������
	for (; decimal_2;)
	{
		hexadecimalArray[i2] = decimal_2 % 16;
		decimal_2 /= 16;
		i2++;
	}
	cout << "0x";
	for (--i2; i2 >= 0; i2--)
	{
		cout << char(hexadecimalArray[i2] < 10 ? hexadecimalArray[i2] + 48 : hexadecimalArray[i2] + 55);
	}
	cout << endl;
#endif // DECIMAL_TO_HEXADECIMAL_CONVERSION
}