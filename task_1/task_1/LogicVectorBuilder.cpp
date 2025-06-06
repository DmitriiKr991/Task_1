#include "LogicVectorBuilder.h"

std::vector<bool> LogicVectorBuilder::build(const Matrix& matrix) {
    std::vector<bool> logicVec(matrix.getRows());

    for (int i = 0; i < matrix.getRows(); ++i) {
        int* row = matrix.getRow(i);
        bool increasing = true;
        for (int j = 1; j < matrix.getCols(); ++j) {
            if (row[j] <= row[j - 1]) {
                increasing = false;
                break;
            }
        }
        logicVec[i] = increasing;
    }

    return logicVec;
}
