#include<iostream>
using namespace std;

//#define DEC_2_BIN
#define DEC_2_HEX

void main()
{
	setlocale(LC_ALL, "Rus");

#ifdef DEC_2_HEX

	int decimal;		//Десятичное число, веденное с клавиатуры.
	const int n = 8;	//Максимальная разрядность Hex числа.
	int hex[n] = {};	//Этот массив будет хранить разряды шестнадцатеричного числа.

	cout << "Введите десятичное число: "; cin >> decimal;

	int i = 0;			//Счетчик разрядов.
	for (; decimal; )
	{
		hex[i] = decimal % 16;
		decimal /= 16;
		i++;
	}
	cout << "0x";
	for (--i; i >= 0; i--)
	{
		/*switch (hex[i])
		{
		case 10: cout << "A"; break;
		case 11: cout << "B"; break;
		case 12: cout << "C"; break;
		case 13: cout << "D"; break;
		case 14: cout << "E"; break;
		case 15: cout << "F"; break;
		default: cout << hex[i];
		}*/
		//if (hex[i] < 10)cout << hex[i];
		//else cout << char(hex[i] + 55);
		cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
	}
	cout << endl;
#endif // DEC_2_HEX
}