#pragma once

#include <exception>
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
    //if ((a/b) < 3)
        //throw std::runtime_error("a/b must be >= 3.");

    switch (flatPlateType)
    {
        case CC:
            switch (loadedEdges)
            {
                case loadedEdgeSS:
                    kc = 7.;
                case loadedEdgeCC:
                    kc = 7.3;
            }
        case CSS:
            kc = 5.75;
        case SSSS:
            switch (loadedEdges)
            {
                case loadedEdgeSS:
                    kc = 4.;
                case loadedEdgeCC:
                    kc = 4.2;
            }
        case CF:
            kc = 1.4;
        case SSF:
            switch (loadedEdges)
            {
                case loadedEdgeSS:
                    kc = 0.4;
                case loadedEdgeCC:
                    kc = 0.5;
            }
    }

    double PI = atan(1.)*4;
    return kc * PI*PI * Ec * pow(t / b, 2) / (12 * (1 - nu*nu));
}
