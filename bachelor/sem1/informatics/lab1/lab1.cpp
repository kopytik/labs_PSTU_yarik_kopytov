#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a = 100;
    double b = 0.001;
    double c, n,s,k,x;
    c = pow(a+b, 4);
    n = a + pow(a , 3)*4*b;
    s = 6*a*a*b*b;
    k = 4 * a * pow(b , 3) + pow(b , 4);
    x = c - (n + s); 
    cout << fixed <<c << endl;
    cout << fixed << n << endl;
    cout << fixed << s << endl;
    cout << fixed << k << endl;
    cout << fixed << x << endl;
    cout << fixed << x/k;
    return 0;
}
