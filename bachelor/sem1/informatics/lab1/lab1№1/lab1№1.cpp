#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a = 100; 
    float b = 0.001;
    float c, n,s,k,x;
    c = pow(a+b, 4); // (a+b)^4
    n = a + pow(a , 3)*4*b; // a + a^3 * 4b
    s = 6*a*a*b*b; // 6a^2*b^2
    k = 4 * a * pow(b , 3) + pow(b , 4); // 4a*b^3
    x = c - (n + s); // (a+b)^4 - ((a + a^3 * 4b) + (6a^2*b^2))
    cout << fixed <<c << endl; 
    cout << fixed << n << endl;
    cout << fixed << s << endl;
    cout << fixed << k << endl;
    cout << fixed << x << endl;
    cout << fixed << x/k; // ((a+b)^4 - ((a + a^3 * 4b) + (6a^2*b^2)))/4a*b^3
    return 0;
}
