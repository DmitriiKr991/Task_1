#include "gtest/gtest.h"
#include "Matrix.h"  // Укажите путь к Matrix.h

// Проверка конструктора и геттеров
TEST(MatrixTest, ConstructorAndGetters) {
    Matrix m(2, 3);
    EXPECT_EQ(m.getRows(), 2);
    EXPECT_EQ(m.getCols(), 3);
}

// Проверка доступа к строкам
TEST(MatrixTest, SetAndGetRowValues) {
    Matrix m(1, 3);
    int* row = m.getRow(0);
    row[0] = 5;
    row[1] = 10;
    row[2] = 15;

    int* retrieved = m.getRow(0);
    EXPECT_EQ(retrieved[0], 5);
    EXPECT_EQ(retrieved[1], 10);
    EXPECT_EQ(retrieved[2], 15);
}

// Проверка независимости строк
TEST(MatrixTest, RowsAreIndependent) {
    Matrix m(2, 2);
    m.getRow(0)[0] = 1;
    m.getRow(1)[0] = 99;

    EXPECT_NE(m.getRow(0)[0], m.getRow(1)[0]);
}

// Проверка освобождения памяти — только на отсутствие краша (тест на утечку в Valgrind или VS Diagnostics)
TEST(MatrixTest, DestructorDoesNotCrash) {
    Matrix* m = new Matrix(5, 5);
    delete m;
    SUCCEED();  // Просто проверка, что delete не вызывает краш
}
