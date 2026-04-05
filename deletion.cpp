#include <iostream>
using namespace std;

int main() {
    int angka[5] = {10, 20, 30, 40, 50};
    int ukuran = 5;
    int posisiHapus = 2;

    for (int i = posisiHapus; i < ukuran - 1; i++) {
        angka[i] = angka[i + 1];
    }
    
    ukuran--;

    for (int i = 0; i < ukuran; i++) {
        cout << angka[i] << " ";
    }

    return 0;
}