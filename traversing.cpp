#include <iostream>
using namespace std;

int main() {
    int angka[] = {10, 20, 30, 40, 50};
    int ukuran = 5;
    int total = 0;

    for (int i = 0; i < ukuran; i++) {
        cout << "Nilai: " << angka[i] << endl;
        total += angka[i];
    }

    cout << "Total: " << total << endl;

    return 0;
}