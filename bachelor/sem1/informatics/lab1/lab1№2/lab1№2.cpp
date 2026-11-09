#include <iostream>
using namespace std;

int main() {
    int n, m;
    int result;

    // Ввод исходных значений
    cout << "Введите n: ";
    cin >> n;

    cout << "Введите m: ";
    cin >> m;

    // Сохраняем введённые значения
    int n0 = n;
    int m0 = m;

    // 1. Выражение n++ - m
    n = n0;
    m = m0;

    result = n++ - m;

    cout << "\n1) n++ - m = " << result << endl;
    cout << "После вычисления: n = " << n
         << ", m = " << m << endl;

    // 2. Выражение m-- > n
    n = n0;
    m = m0;

    result = m-- > n;

    cout << "\n2) m-- > n = " << result << endl;
    cout << "После вычисления: n = " << n
         << ", m = " << m << endl;

    // 3. Выражение n-- > m
    n = n0;
    m = m0;

    result = n-- > m;

    cout << "\n3) n-- > m = " << result << endl;
    cout << "После вычисления: n = " << n
         << ", m = " << m << endl;

    return 0;
}