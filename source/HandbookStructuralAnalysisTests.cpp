#include <algorithm>

#include "./buckling/BucklingMetalTests.h"
#include "./buckling/ColumnBucklingEulerTests.h"
#include "./fatigue/FatigueKfTests.h"

int main()
{
    int returncode = 100;

    returncode = std::min(returncode, BucklingMetalTests());
    returncode = std::min(returncode, ColumnBucklingEulerTests());
    returncode = std::min(returncode, FatigueKfTests());

    return returncode;
}
