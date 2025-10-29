#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct nrComplex {
    float a;
    float b;
};

namespace calculate {

    float abs(float rv) {
        return fabsf(rv);
    }
    float abs(nrComplex cv) {
        return sqrtf(cv.a * cv.a + cv.b * cv.b);
    }
    
} 

int main() {
    
    char c;
    cin >> c; 
    if (c == 'R') {
        float rv; 
        cin >> rv; 
        float result = calculate::abs(rv); 
        cout << result << endl;
    } 
    else {
        if (c == 'C') {
            nrComplex cv; 
            cin >> cv.a; 
            cin >> cv.b; 
            float result = calculate::abs(cv); 
            cout << result << endl;
            }
        }
    return 0;
}
