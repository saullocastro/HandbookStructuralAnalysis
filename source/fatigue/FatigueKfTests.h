#include "FatigueKf.h"
#include "../TestUtils.h"

int FatigueKfTests()
{
    double Kf = FatigueKf(0.2321, 3.);
    if (IsClose(Kf, 1., 1.e-6))
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

