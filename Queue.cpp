#include <iostream>
#include <queue>
using namespace std;

/*
Queue beroperasi dengan prinsip FIFO (First In, First Out). Data yang pertama kali masuk antrean,
adalah data yang wajib pertama kali dilayani dan dikeluarkan.

enqueue(data) / push(data): Memasukkan orang baru ke barisan paling belakang (Rear / Back).

dequeue() / pop(): Mengeluarkan dan melayani orang yang ada di barisan paling depan (Front).

front() / peek(): Mengintip siapa yang ada di barisan paling depan tanpa mengeluarkannya.

isEmpty() / empty(): Mengecek apakah antrean kosong.
*/

int main(){
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Ukuruan queue: " << q.size() << endl;
    cout << "Elemen terdepan: " << q.front() << endl;

    q.pop();
    cout << "Setelah dequeue, elemen terdepan: " << q.front() << endl;
    cout << "Setelah dequeue, ukuruan queue: " << q.size() << endl;

}