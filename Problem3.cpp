#include <iostream>
#include <string>
#include <cmath>

using namespace std;

namespace calculate {
    float solve(float a, float b) {
        return -b / a;
    }
}

int main() {

    float a, b;
    cin >> a; 
    cin >> b; 
    if (a == 0) {
        cout << "a must be larger than 0 to solve for x" << endl;
    } 
    else 
    {
        float r = calculate::solve(a, b); 
        cout << r << endl;
    }
    return 0;
}