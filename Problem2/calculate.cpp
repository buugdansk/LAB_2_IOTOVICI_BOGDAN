#include "calculate.h" 
#include <cmath> 

namespace calculate {
    float abs(float rv) {
        return fabsf(rv);
    }
    float abs(nrComplex cv) {
        return sqrtf(cv.a * cv.a + cv.b * cv.b);
    }
}