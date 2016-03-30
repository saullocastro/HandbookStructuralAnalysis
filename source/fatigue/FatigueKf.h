#pragma once

#include <math.h>

double FatigueKf(double q, double kt)
{
    return 1. + q*(kt - 1.);
}
