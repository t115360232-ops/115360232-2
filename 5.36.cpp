#include <iostream>
using namespace std;

void hanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        cout << "將盤子 1 從柱子 " << from_rod << " 移動到柱子 " << to_rod << endl;
        return;
    }
    hanoi(n - 1, from_rod, aux_rod, to_rod);

    cout << "將盤子 " << n << " 從柱子 " << from_rod << " 移動到柱子 " << to_rod << endl;

    hanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    int n;
    cout << "請輸入河內塔的盤子數量: ";
    cin >> n;
    cout << "移動步驟如下：" << endl;
    hanoi(n, 'A', 'C', 'B');
    return 0;
}