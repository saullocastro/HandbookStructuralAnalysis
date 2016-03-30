#pragma once

#include <cmath>

double ColumnBucklingEuler(double E, double I, double L)
{
    double PI = atan(1.)*4;
    return PI*PI * E * I / (L * L);
}
