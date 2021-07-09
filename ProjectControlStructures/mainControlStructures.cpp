#include <iostream>
using namespace std;

//#define WEATHER
//#define SHOT

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef WEATHER
	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
	if (temperature > 0)
	{
		cout << "На улице тепло!" << endl;
	}
	else
	{
		cout << "На улице холодно!" << endl;
	}
#endif // WEATHER

#ifdef SHOT
	int n;
	cout << "Введите число: "; cin >> n;

	if (0 <= n && n <= 10)
	{
		cout << "Цель поражена!" << endl;
	}
	else
	{
		cout << "Вы промахнулись!" << endl;
	}
#endif // SHOT

}