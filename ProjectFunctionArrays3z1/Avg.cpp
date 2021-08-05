#include"Avg.h"
#include"Sum.h"

double Avg(int arr[], const int n)
{
	//Среднее арифметическое всех элементов
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	//Среднее арифметическое всех элементов
	return (double)Sum(arr, n) / n;
}
double Avg(short arr[], const int n)
{
	//Среднее арифметическое всех элементов
	return (double)Sum(arr, n) / n;
}
double Avg(float arr[], const int n)
{
	//Среднее арифметическое всех элементов
	return (double)Sum(arr, n) / n;
}

double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//Среднее арифметическое всех элементов
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//Среднее арифметическое всех элементов
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(short arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//Среднее арифметическое всех элементов
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//Среднее арифметическое всех элементов
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}