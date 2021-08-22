#include<iostream>
using namespace std;

#define TAB "\t"
#define DECIMAL_TO_BINARY_CONVERSION
#define DECIMAL_TO_HEXADECIMAL_CONVERSION

void main()
{
	setlocale(LC_ALL, "Rus");

#ifdef DECIMAL_TO_BINARY_CONVERSION
	cout << TAB << "ПЕРЕВОД ИЗ ДЕСЯТИЧНОЙ В ДВОИЧНУЮ СИСТЕМУ СЧИСЛЕНИЯ:" << "\n" << endl;
	const int MAX_BIN_DIGIT = 64; //Максимальная разрядность двоичного числа
	bool binaryArray[MAX_BIN_DIGIT] = {}; //Этот массив будет хранить разряды двоичного числа
	unsigned long long int decimal_1; //Десятичное число, введённое с клавиатуры
	cout << "Введите десятичное число: "; cin >> decimal_1;


	cout << "Полученное двоичное число: ";
	int i1 = 0; //Cчетчик разряда
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
	cout << "\n" << TAB << "ПЕРЕВОД ИЗ ДЕСЯТИЧНОЙ В ШЕСТНАДЦАТЕРИЧНУЮ СИСТЕМУ СЧИСЛЕНИЯ:" << "\n" << endl;
	const int MAX_HEX_DIGITS = 8; //Максимальная разрядность шестнадцатеричного числа
	char hexadecimalArray[MAX_HEX_DIGITS] = {}; //Этот массив будет хранить разряды шестнадцатеричного числа
	unsigned int decimal_2;  //Десятичное число, введённое с клавитатуры
	cout << "Введите десятичное число: "; cin >> decimal_2;

	cout << "Полученное шестнадцатеричное число: ";
	int i2 = 0; //Cчетчик разряда
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