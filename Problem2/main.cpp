#include <iostream>
#include <cmath>

using namespace std;

struct nrComplex {
    float a;
    float b;
};

float absoluteValue(float r) {
    return abs(r);
}

float absoluteValue(nrComplex c) {
    return sqrt(c.a * c.a + c.b * c.b);
}

int main() {
    float x;
    cin >> x;
    cout << absoluteValue(x) << endl;
    nrComplex n;
    cin >> n.a;
    cin >> n.b;
    cout << absoluteValue(n) << endl;
    return 0;
}