#include <iostream>
#include <vector>
#include "Matrix.h"
#include "LogicVectorBuilder.h"
#include "gtest/gtest.h"

class App {
public:
    void run() {
        int rows, cols;
        std::cout << "Введите кол-во строк: ";
        std::cin >> rows;
        std::cout << "Введите кол-во столбцов: ";
        std::cin >> cols;

        Matrix matrix(rows, cols);
        matrix.input();

        std::vector<bool> logicVector = LogicVectorBuilder::build(matrix);

        std::cout << "\nЛогический вектор (1 - Возрастает, 0 - нет):\n";
        for (bool val : logicVector) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }
};

int main() {

    setlocale(LC_ALL, "Russian");
    std::wcout.imbue(std::locale("Russian"));

    App app;
    app.run();
    return 0;
}
