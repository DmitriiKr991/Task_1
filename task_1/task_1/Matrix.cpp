#include "Matrix.h"

Matrix::Matrix(int r, int c) : rows(r), cols(c) {
    data = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        data[i] = new int[cols];
    }
}

void Matrix::input() {
    for (int i = 0; i < rows; ++i) {
        std::cout << "¬ведите " << cols << " числа дл€ строки " << i + 1 << ":\n";
        for (int j = 0; j < cols; ++j) {
            std::cin >> data[i][j];
        }
    }
}

int* Matrix::getRow(int index) const {
    return data[index];
}

int Matrix::getRows() const {
    return rows;
}

int Matrix::getCols() const {
    return cols;
}

Matrix::~Matrix() {
    for (int i = 0; i < rows; ++i) {
        delete[] data[i];
    }
    delete[] data;
}
