#include<iostream>
using namespace std;

#define TAB "\t"

//Использовать нижеперечисленные define строго по отдельности\
// так как они показывают исполнение различных способов передачи параметров.
//#define POINTER_PARAMETRES
#define REFERENCES_PARAMETRES

#ifdef POINTER_PARAMETRES
void Exchange(int* a, int* b);

void main()
{
	setlocale(LC_ALL, "");
	int a = 2, b = 3;
	cout << a << "\t" << b << endl;
	Exchange(&a, &b);
	cout << a << "\t" << b << endl;
}

void Exchange(int* a, int* b)
{
	int buffer = *a;
	*a = *b;
	*b = buffer;
}
#endif // POINTER_PARAMETRES

#ifdef REFERENCES_PARAMETRES
void Exchange(int& a, int& b);

void main()
{
	setlocale(LC_ALL, "");
	int a = 2, b = 3;
	cout << a << "\t" << b << endl;
	Exchange(a, b);
	cout << a << "\t" << b << endl;
}

void Exchange(int& a, int& b)
{
	int buffer = a;
	a = b;
	b = buffer;
}
#endif // REFERENCES_PARAMETRES
