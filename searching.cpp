#include <iostream>
using namespace std;

int main() {
    int angka[] = {10, 20, 30, 40, 50};
    int ukuran = 5;
    int cari = 30;
    int ditemukanDi = -1;

    for (int i = 0; i < ukuran; i++) {
        if (angka[i] == cari) {
            ditemukanDi = i;
            break;
        }
    }

    if (ditemukanDi != -1) {
        cout << "Data ditemukan pada indeks: " << ditemukanDi << endl;
    } else {
        cout << "Data tidak ditemukan." << endl;
    }

    return 0;
}