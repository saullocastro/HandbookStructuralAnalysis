#pragma once

#include <iostream>
#include <math.h>

// Bruhn Fig. C5.2, using the kc value
enum FlatPlateType {
    CC,    // A 
    CSS,   // B
    SSSS,  // C
    CF,    // D
    SSF    // E
};

enum LoadedEdges {
    loadedEdgeCC,
    loadedEdgeSS
};

double BucklingFlatPlateCompression(double a, double b, double t,
        double Ec, double nu,
        FlatPlateType flatPlateType, LoadedEdges loadedEdges)
{
    double kc;
    //TODO
    //if ((a/b) < 3)
        //throw std::runtime_error("a/b must be >= 3.");

    if (flatPlateType == CC && loadedEdges == loadedEdgeSS)
        kc = 7.;
    else if (flatPlateType == CC && loadedEdges == loadedEdgeCC)
        kc = 7.3;
    else if (flatPlateType == CSS)
        kc = 5.75;
    else if (flatPlateType == SSSS && loadedEdges == loadedEdgeSS)
        kc = 4.;
    else if (flatPlateType == SSSS && loadedEdges == loadedEdgeCC)
        kc = 4.2;
    else if (flatPlateType == CF)
        kc = 1.4;
    else if (flatPlateType == SSF && loadedEdges == loadedEdgeSS)
        kc = 0.4;
    else if (flatPlateType == SSF && loadedEdges == loadedEdgeCC)
        kc = 0.5;
    else
        kc = 0.;

    double PI = atan(1.)*4;
    return kc * PI*PI * Ec * pow(t / b, 2) / (12 * (1 - nu*nu));
}
