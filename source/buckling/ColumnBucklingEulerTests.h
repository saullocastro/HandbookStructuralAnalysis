#pragma once

#include "ColumnBucklingEuler.h"
#include "../TestUtils.h"

int ColumnBucklingEulerTests()
{
    double Fcr = ColumnBucklingEuler(7100., 2.e3, 1000.);
    if (IsClose(Fcr, 140.1483824954689, 1.e-6))
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

