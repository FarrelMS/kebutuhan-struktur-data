#include <iostream>
using namespace std;

int main() {
    int angka[] = {50, 10, 40, 20, 30};
    int n = 5;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (angka[j] > angka[j + 1]) {
                int temp = angka[j];
                angka[j] = angka[j + 1];
                angka[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << angka[i] << " ";
    }

    return 0;
}