#pragma once

#include "StressBending.h"
#include "../TestUtils.h"

int StressBendingTests()
{
    if (IsClose(StressBending(200., 30., 1.e3), -6.0, 1.e-6))
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
