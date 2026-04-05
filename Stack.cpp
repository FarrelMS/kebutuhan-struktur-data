#include <iostream>
#include <stack>
using namespace std;

/*
Stack adalah struktur data linear yang menerapkan
prinsip LIFO (Last In, First Out), artinya elemen yang
terakhir dimasukkan adalah elemen yang pertama
dikeluarkan. Konsep ini mirip dengan tumpukan piring, di
mana piring yang paling atas (terakhir ditaruh) akan
diambil terlebih dahulu.

push(data): Meletakkan elemen baru tepat di puncak tumpukan (Top)

pop(): Membuang elemen yang ada di paling puncaktumpukan. (Catatan: Di C++ standar, fungsi ini TIDAK
mengembalikan nilai, hanya menghapus).

top() / peek(): Mengintip nilai dari elemen paling atastanpa membuangnya

isEmpty() / empty(): Mengecek apakah tumpukankosong. Ini wajib dipanggil sebelum melakukan pop()
agar program tidak crash (Underflow)
*/
int main(){
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    
    cout << "Ukuran stack: " << s.size() << endl;
    cout << "Stack paling atas: " << s.top() << endl;

    s.pop();
    cout << "Setelah pop, stack paling atas: " << s.top() << endl;
    cout << "Setelah pop, ukuran stack: " << s.size() << endl;

    while (!s.empty())
    {
        cout << "Menghapus elemen: " << endl;
        s.pop();
    }

    return 0;
}