#pragma once

#include <cmath>
#include "stdbool.h"

bool IsClose(double v1, double v2, double TOL=1.e-9)
{
    double res = std::abs(v1 - v2);
    if (res < TOL)
        return true;
    else
        return false;
}
