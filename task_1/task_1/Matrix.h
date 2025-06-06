#pragma once
#include <iostream>

class Matrix {
private:
    int** data;
    int rows, cols;

public:
    Matrix(int r, int c);
    void input();
    int* getRow(int index) const;
    int getRows() const;
    int getCols() const;
    ~Matrix();
};