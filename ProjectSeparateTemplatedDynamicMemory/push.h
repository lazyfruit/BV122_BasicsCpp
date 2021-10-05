#pragma once

#include"StdAfx.h"

template<typename T>
T* push_back(T arr[], int& n, T value);
template<typename T>
T* push_front(T arr[], int& n, T value);

template<typename T>
void push_row_back(T**& arr, unsigned int& rows, unsigned int& cols);
template<typename T>
void push_row_front(T**& arr, unsigned int& rows, unsigned int& cols);
template<typename T>
void push_col_front(T** arr, unsigned int& rows, unsigned int& cols);
template<typename T>
void push_col_back(T** arr, unsigned int& rows, unsigned int& cols);