#include <iostream>

using namespace std;

float ec(float a, float b) {
    if (a == 0) {
        if (b == 0) {
            throw "solutii infinite";
        } else {
            throw "nu sunt solutii";
        }
    }
    return -b / a;
}

int main() {
    float a, b;
    cin >> a >> b;

    try {
        cout << ec(a, b);
    }
    catch (const char* m) {
        cout << m;
    }

    return 0;
}