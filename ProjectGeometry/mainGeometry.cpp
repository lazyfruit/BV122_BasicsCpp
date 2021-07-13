#include<iostream>
using namespace std;

//#define SQUARE
//#define TRIANGLE1
//#define TRIANGLE2
//#define TRIANGLE3
//#define TRIANGLE4
//#define RHOMBUS1
//#define RHOMBUS2
//#define PLUS_MINUS
//#define PLUS_MINUS2
//#define PLUS_MINUS3
//#define CHES_BOARD
//#define CHES_BOARD_TERNARY

#define UPPER_LEFT_ANGLE	(char)218
#define UPPER_RIGHT_ANGLE	(char)191
#define DOWN_LEFT_ANGLE		(char)192
#define DOWN_RIGHT_ANGLE	(char)217
#define VERT_LINE			(char)179
#define HORIZ_LINE			(char)196 << (char)196
#define WHITE_BOX			"\xDB\xDB"							//(char)219 << (char)219 //(для CHES_BOARD)
#define BLACK_BOX			"\x20\x20"//"\x20\x20" или "  ")	//(char)32 << (char)32 //(для CHES_BOARD)

void main()
{
	setlocale(LC_ALL, "Rus");

	int n;

	cout << "Введите размер фигуры: "; cin >> n;

#ifdef SQUARE

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif // SQUARE

#ifdef TRIANGLE1 

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif // TRIANGLE1

#ifdef TRIANGLE2 

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif // TRIANGLE2

#ifdef TRIANGLE3 

	for (int i = 0;
		i < n;
		i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = i;
			j < n;
			j++)
		{
			cout << "*";
		}

		cout << endl;
	}
#endif // TRIANGLE3

#ifdef TRIANGLE4 


	for (int i = 0;
		i < n;
		i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << " ";
		}
		for (int j = 0;
			j <= i;
			j++)
		{
			cout << "*";
		}

		cout << endl;
	}
#endif // TRIANGLE4

#ifdef RHOMBUS1
	for (int i = 0;
		i < n;
		i++)
	{
		for (int j = i; j < n; j++)	cout << " ";
		cout << "/";
		for (int j = 0; j < i; j++) cout << "  ";
		cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) cout << " ";
		cout << "\\";
		for (int j = i; j < n - 1; j++) cout << "  ";
		cout << "/";
		cout << endl;
	}
#endif // RHOMBUS1

#ifdef RHOMBUS2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << " ";
		}
		cout << "/";
		for (int j = 0; j < i * 2; j++)
		{
			cout << " ";
		}
		cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}
		cout << "\\";
		for (int j = 0; j < (n - 1 - i) * 2; j++)
		{
			cout << " ";
		}
		cout << "/";
		cout << endl;
	}
#endif // RHOMBUS2

#ifdef PLUS_MINUS
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i + j) % 2 == 0)
			{
				cout << "+ ";
			}
			else
			{
				cout << "- ";
			}
		}
		cout << endl;
	}
#endif // PLUS_MINUS

#ifdef PLUS_MINUS2
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			(i + j) % 2 == 0 ? cout << "+ " : cout << "- ";
		}
		cout << endl;
	}
#endif // PLUS_MINUS2

#ifdef PLUS_MINUS3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << ((i + j) % 2 == 0 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif // PLUS_MINUS3

	//setlocale(LC_ALL, "C"); //Возвращает кодировку по умолчанию

#ifdef CHES_BOARD
	n++;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0) cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n) cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0) cout << DOWN_LEFT_ANGLE;
			else if (i == n && j == n) cout << DOWN_RIGHT_ANGLE;
			else if (i == 0 || i == n) cout << HORIZ_LINE;
			else if (j == 0 || j == n) cout << VERT_LINE;
			else
			{
				if ((i + j) % 2 == 0) cout << WHITE_BOX;
				else cout << BLACK_BOX;
			}
		}
		cout << endl;
	}
#endif // CHES_BOARD

#ifdef CHES_BOARD_TERNARY
	n++;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0) cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n) cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0) cout << DOWN_LEFT_ANGLE;
			else if (i == n && j == n) cout << DOWN_RIGHT_ANGLE;
			else if (i == 0 || i == n) cout << HORIZ_LINE;
			else if (j == 0 || j == n) cout << VERT_LINE;
			else
			{
				cout << ((i + j) % 2 == 0 ? WHITE_BOX : BLACK_BOX);
			}
		}
		cout << endl;
	}
#endif // CHES_BOARD_TERNARY

}