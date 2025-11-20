#ifndef CALCULATE_H
#define CALCULATE_H

struct nrComplex {
    float a;
    float b;
};

namespace calculate {
    float abs(float rv);
    float abs(nrComplex cv);
}

#endif