#include <algorithm>

#include "./buckling/BucklingMetalTests.h"
#include "./buckling/ColumnBucklingEulerTests.h"

int main()
{
    int returncode = 0;

    returncode = std::min(returncode, BucklingMetalTests());
    returncode = std::min(returncode, ColumnBucklingEulerTests());

    printf(
    return returncode;
}
