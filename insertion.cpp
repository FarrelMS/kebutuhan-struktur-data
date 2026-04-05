#include <iostream>
using namespace std;

int main() {
    int angka[6] = {10, 20, 40, 50, 60};
    int ukuran = 5;
    int dataBaru = 30;
    int posisi = 2;

    for (int i = ukuran; i > posisi; i--) {
        angka[i] = angka[i - 1];
    }

    angka[posisi] = dataBaru;
    ukuran++;

    for (int i = 0; i < ukuran; i++) {
        cout << angka[i] << " ";
    }

    return 0;
}