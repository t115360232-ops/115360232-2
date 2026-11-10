#include <iostream>
using namespace std;

long long power(int base, int exponent) {
    if (exponent == 1) {
        return base;
    }
    return base * power(base, exponent - 1);
}

int main() {
    int base, exponent;
    cout << "請輸入底數(base) 與指數(exponent， >= 1) : ";
    cin >> base >> exponent;
    cout << base << " ^ " << exponent << " = " << power(base, exponent) << endl;
    return 0;
}