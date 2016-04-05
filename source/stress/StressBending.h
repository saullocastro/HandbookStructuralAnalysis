#pragma once

#include <math.h>

double StressBending(double M, double y, double I)
{
    return -M*y/I;
}
