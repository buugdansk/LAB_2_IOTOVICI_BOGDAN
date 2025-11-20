#include <iostream>
#include "calculate.h"

using namespace std;

int main() {
    float a, b;
    cin >> a; 
    cin >> b; 
    if (a == 0) {
        cout << "a must be larger than 0 to solve for x" << endl;
    } 
    else {
        float result = calculate::solveLinear(a, b); 
        cout << result << endl;
    }
    return 0;
}