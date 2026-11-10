#include <iostream>
using namespace std;

char changeCase(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32; 
    }
    else if (c >= 'A' && c <= 'Z') {
        return c + 32; 
    }
    return c; 
}

int main() {
    char ch;
    cout << "請輸入一個字母: ";
    cin >> ch;
    cout << "轉換後的字元: " << changeCase(ch) << endl;
    return 0;
}