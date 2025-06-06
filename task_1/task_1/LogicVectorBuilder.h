#pragma once
#include <vector>
#include "Matrix.h"

class LogicVectorBuilder {
public:
    static std::vector<bool> build(const Matrix& matrix);
};
