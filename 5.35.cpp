#include <iostream>
using namespace std;

unsigned long long int fibonacci(unsigned int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    unsigned long long int prev2 = 0; 
    unsigned long long int prev1 = 1; 
    unsigned long long int current = 0;

    for (unsigned int i = 2; i <= n; ++i) {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    return current;
}
int main() {
    unsigned int n;
    cout << "叫块璶琩高禣猧ê计ま n : ";
    cin >> n;
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;

    cout << "\n-- 碝т╰参程禣猧ê计 " << endl;
    unsigned int i = 0;
    while (true) {
        unsigned long long int prev = (i == 0) ? 0 : fibonacci(i - 1);
        unsigned long long int curr = fibonacci(i);
        if (i > 0 && curr < prev) {
            cout << "╰参非絋璸衡程ま n = " << i - 1 << endl;
            cout << "程禣猧ê计: " << fibonacci(i - 1) << endl;
            break;
        }
        i++;
    }
    return 0;
}