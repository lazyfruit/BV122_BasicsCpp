#pragma once

#include"StdAfx.h"

template<typename T>
T* insert(T arr[], int& n, T value, int insert_index);

template<typename T>
void insert_row(T**& arr, unsigned int& rows, unsigned int& cols, unsigned int insert_row_index);
template<typename T>
void insert_col(T** arr, unsigned int& rows, unsigned int& cols, unsigned int insert_col_index);