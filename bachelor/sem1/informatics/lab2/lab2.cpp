#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double sum = 0.0;       // сумма ряда
    double eps = 1e-4;      // заданная точность
    double a = 0.5;         // первый член ряда
    int n = 1;              // номер члена ряда

    cout << "Summa ryada a_n = (2n - 1) / 2^n" << endl;

    for (; a >= eps; n++) {
        sum += a;           // добавляем член к сумме

        cout << "a_" << n << " = " << a << endl;

        // Вычисляем следующий член через предыдущий
        a = a * (2.0 * n + 1) / (2.0 * (2 * n - 1));
    }

    cout << "Kolichestvo chlenov = " << n - 1 << endl;
    cout << "Summa ryada = " << sum << endl;

    return 0;
}                                    