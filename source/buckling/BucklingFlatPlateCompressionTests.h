#pragma once

#include "BucklingFlatPlateCompression.h"
#include "../TestUtils.h"
#include "iostream"

int BucklingFlatPlateCompressionTests()
{
    if (
        IsClose(BucklingFlatPlateCompression(2., 1., 0.1, 7100, 0.33,
                CC, loadedEdgeCC),
                478.3802754165838) &&
        IsClose(BucklingFlatPlateCompression(2., 1., 0.1, 7100, 0.33,
                CC, loadedEdgeSS),
                458.7208120432996) &&
        IsClose(BucklingFlatPlateCompression(2., 1., 0.1, 7100, 0.33,
                CF, loadedEdgeSS),
                91.74416240865992)
        )
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

