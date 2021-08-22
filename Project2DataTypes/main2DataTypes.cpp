#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << true << endl;
	cout << false << endl << endl;

	cout << sizeof(short) << endl;
	cout << "unsigned short:\t\t" << 0 << "\t" << USHRT_MAX << endl;
	cout << "  signed short:\t\t" << SHRT_MIN << "\t" << SHRT_MAX << endl << endl;

	cout << sizeof(long) << endl;
	cout << "unsigned long:\t\t" << 0 << "\t" << ULONG_MAX << endl;
	cout << "  signed long:\t\t" << LONG_MIN << "\t" << LONG_MAX << endl << endl;

	cout << sizeof(long long) << endl;
	cout << "unsigned llong:\t\t" << 0 << "\t" << ULLONG_MAX << endl;
	cout << "  signed llong:\t\t" << LLONG_MIN << "\t" << LLONG_MAX << endl << endl;

	cout << sizeof(float) << endl;
	cout << "signed float:\t" << FLT_MIN << "\t" << FLT_MAX << endl << endl;

	cout << sizeof(double) << endl;
	cout << "signed double:\t" << DBL_MIN << "\t" << DBL_MAX << endl << endl;
}