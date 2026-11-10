#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return (a / gcd(a, b)) * b; 
}

int main() {
    int num1, num2;
    cout << "請輸入兩個整數: ";
    cin >> num1 >> num2;
    cout << "最小公倍數(LCM) 為: " << lcm(num1, num2) << endl;
    return 0;
}