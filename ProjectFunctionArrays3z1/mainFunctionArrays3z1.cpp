#include"StdAfx.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Sum.h"
#include"Avg.h"
#include"minValueIn.h"
#include"maxValueIn.h"
#include"ShiftLeft.h"
#include"ShiftRight.h"

#define TAB "\t\t"

//#define HOMEWORK_1
//#define INT_ARR
//#define DOUBLE_BRR
//#define SHORT_CRR
//#define FLOAT_DRR
//#define CHAR_ERR

#define HOMEWORK_2
#define INT_ARR_2
#define DOUBLE_BRR_2
#define SHORT_CRR_2
#define FLOAT_DRR_2
#define CHAR_ERR_2

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef HOMEWORK_1

#ifdef INT_ARR
	cout << TAB << "for_int: \n" << endl;
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "����� ���� ���������: " << Sum(arr, n) << endl;
	cout << "������� �������������� ���������: " << Avg(arr, n) << endl;
	cout << "����������� �������� ���� ���������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� ���� ���������: " << maxValueIn(arr, n) << endl;
	ShiftLeft(arr, n);
	Print(arr, n);
	ShiftRight(arr, n);
	Print(arr, n);
	cout << endl;
#endif // INT_ARR

#ifdef DOUBLE_BRR
	cout << TAB << "for_double: \n" << endl;
	const int B_SIZE = 8;
	double brr[B_SIZE];
	FillRand(brr, B_SIZE);
	Print(brr, B_SIZE);
	Sort(brr, B_SIZE);
	Print(brr, B_SIZE);
	cout << "����� ���� ���������: " << Sum(brr, B_SIZE) << endl;
	cout << "������� �������������� ���������: " << Avg(brr, B_SIZE) << endl;
	cout << "����������� �������� ���� ���������: " << minValueIn(brr, B_SIZE) << endl;
	cout << "������������ �������� ���� ���������: " << maxValueIn(brr, B_SIZE) << endl;
	ShiftLeft(brr, B_SIZE);
	Print(brr, B_SIZE);
	ShiftRight(brr, B_SIZE);
	Print(brr, B_SIZE);
	cout << endl;
#endif // DOUBLE_BRR

#ifdef SHORT_CRR
	cout << TAB << "for_short: \n" << endl;
	const short C_SIZE = 10;
	short crr[C_SIZE];
	FillRand(crr, C_SIZE);
	Print(crr, C_SIZE);
	Sort(crr, C_SIZE);
	Print(crr, C_SIZE);
	cout << "����� ���� ���������: " << Sum(crr, C_SIZE) << endl;
	cout << "������� �������������� ���������: " << Avg(crr, C_SIZE) << endl;
	cout << "����������� �������� ���� ���������: " << minValueIn(crr, C_SIZE) << endl;
	cout << "������������ �������� ���� ���������: " << maxValueIn(crr, C_SIZE) << endl;
	ShiftLeft(crr, C_SIZE);
	Print(crr, C_SIZE);
	ShiftRight(crr, C_SIZE);
	Print(crr, C_SIZE);
	cout << endl;
#endif // SHORT_CRR

#ifdef FLOAT_DRR
	cout << TAB << "for_float: \n" << endl;
	const int D_SIZE = 12;
	float drr[D_SIZE];
	FillRand(drr, D_SIZE);
	Print(drr, D_SIZE);
	Sort(drr, D_SIZE);
	Print(drr, D_SIZE);
	cout << "����� ���� ���������: " << Sum(drr, D_SIZE) << endl;
	cout << "������� �������������� ���������: " << Avg(drr, D_SIZE) << endl;
	cout << "����������� �������� ���� ���������: " << minValueIn(drr, D_SIZE) << endl;
	cout << "������������ �������� ���� ���������: " << maxValueIn(drr, D_SIZE) << endl;
	ShiftLeft(drr, D_SIZE);
	Print(drr, D_SIZE);
	ShiftRight(drr, D_SIZE);
	Print(drr, D_SIZE);
	cout << endl;
#endif // FLOAT_DRR

#ifdef CHAR_ERR
	cout << TAB << "for_char: \n" << endl;
	const int E_SIZE = 15;
	char err[E_SIZE];
	FillRand(err, E_SIZE);
	Print(err, E_SIZE);
	ShiftLeft(err, E_SIZE);
	Print(err, E_SIZE);
	ShiftRight(err, E_SIZE);
	Print(err, E_SIZE);
#endif // CHAR_ERR

#endif // HOMEWORK_1

#ifdef HOMEWORK_2

#ifdef INT_ARR_2
	cout << TAB << "for_int_2: \n" << endl;
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "����� ���� ��������� � �������: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "������� �������������� ���� ��������� � �������: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << endl;
#endif // INT_ARR_2

#ifdef DOUBLE_BRR_2
	cout << TAB << "for_double_2: \n" << endl;
	double i_brr_2[ROWS][COLS];
	FillRand(i_brr_2, ROWS, COLS);
	Print(i_brr_2, ROWS, COLS);
	Sort(i_brr_2, ROWS, COLS);
	Print(i_brr_2, ROWS, COLS);
	cout << "����� ���� ��������� � �������: " << Sum(i_brr_2, ROWS, COLS) << endl;
	cout << "������� �������������� ���� ��������� � �������: " << Avg(i_brr_2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(i_brr_2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(i_brr_2, ROWS, COLS) << endl;
	cout << endl;
#endif // DOUBLE_BRR_2

#ifdef SHORT_CRR_2
	cout << TAB << "for_short_2: \n" << endl;
	short i_crr_2[ROWS][COLS];
	FillRand(i_crr_2, ROWS, COLS);
	Print(i_crr_2, ROWS, COLS);
	Sort(i_crr_2, ROWS, COLS);
	Print(i_crr_2, ROWS, COLS);
	cout << "����� ���� ��������� � �������: " << Sum(i_crr_2, ROWS, COLS) << endl;
	cout << "������� �������������� ���� ��������� � �������: " << Avg(i_crr_2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(i_crr_2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(i_crr_2, ROWS, COLS) << endl;
	cout << endl;
#endif // SHORT_CRR_2

#ifdef FLOAT_DRR_2
	cout << TAB << "for_float_2: \n" << endl;
	float i_drr_2[ROWS][COLS];
	FillRand(i_drr_2, ROWS, COLS);
	Print(i_drr_2, ROWS, COLS);
	Sort(i_drr_2, ROWS, COLS);
	Print(i_drr_2, ROWS, COLS);
	cout << "����� ���� ��������� � �������: " << Sum(i_drr_2, ROWS, COLS) << endl;
	cout << "������� �������������� ���� ��������� � �������: " << Avg(i_drr_2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(i_drr_2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(i_drr_2, ROWS, COLS) << endl;
	cout << endl;
#endif // FLOAT_DRR_2

#ifdef CHAR_ERR_2
	cout << TAB << "for_char_2: \n" << endl;
	char i_err_2[ROWS][COLS];
	FillRand(i_err_2, ROWS, COLS);
	Print(i_err_2, ROWS, COLS);
	cout << endl;
#endif // CHAR_ERR_2

#endif // HOMEWORK_2
}