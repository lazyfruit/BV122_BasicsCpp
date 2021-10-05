#pragma once

#include"StdAfx.h"

template<typename T>
T* erase(T arr[], int& n, int erase_index);

template<typename T>
void erase_row(T**& arr, unsigned int& rows, unsigned int& cols, unsigned int pop_row_index);
template<typename T>
void erase_col(T**& arr, unsigned int& rows, unsigned int& cols, unsigned int pop_col_index);