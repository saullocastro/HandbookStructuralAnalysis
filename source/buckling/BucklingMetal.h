#pragma once

#include <math.h>

double BucklingMetal(
        double k, double a, double b, double t, double Ec, double nu)
{
    double PI = atan(1.)*4;
    return k * PI*PI * Ec * pow(t / b, 2) / (12 * (1 - nu*nu));
}
