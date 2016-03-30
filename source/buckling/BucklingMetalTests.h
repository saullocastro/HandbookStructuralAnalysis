#include "BucklingMetal.h"
#include "../TestUtils.h"

int BucklingMetalTests()
{
    double Fcr = BucklingMetal(0.22, 2., 1., 0.1, 7100, 0.33);
    if (IsClose(Fcr, 14.41693980707513, 1.e-6))
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

