#include <iostream>
#include "calculate.h"

using namespace std;

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