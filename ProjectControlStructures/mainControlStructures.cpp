#include <iostream>
using namespace std;

//#define WEATHER
//#define SHOT

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef WEATHER
	int temperature;
	cout << "������� ����������� �������: "; cin >> temperature;
	if (temperature > 0)
	{
		cout << "�� ����� �����!" << endl;
	}
	else
	{
		cout << "�� ����� �������!" << endl;
	}
#endif // WEATHER

#ifdef SHOT
	int n;
	cout << "������� �����: "; cin >> n;

	if (0 <= n && n <= 10)
	{
		cout << "���� ��������!" << endl;
	}
	else
	{
		cout << "�� ������������!" << endl;
	}
#endif // SHOT

}