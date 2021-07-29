#include<iostream> //cin/cout
// include - подключить/включить в состав/подсоединить
using namespace std;

//Глобальное пространсво имен (Global scope)

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "\n\tHello\"World\"\n";
	cout << "\nПриветМир\n";
	cout << "\nС:\\Windows\\System32\\drivers\\\n";

	int i = 3;
	i += i++ + 1 + (++i *= 2);
	cout << i << endl;
}

// ctrl + f7 - Компиляция
// ctrl + f5 – Запуск