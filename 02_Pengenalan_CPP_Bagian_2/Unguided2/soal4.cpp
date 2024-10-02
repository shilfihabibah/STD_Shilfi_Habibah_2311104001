#include <iostream>

using namespace std;

int main() {
    int data[10];
    int genap[10];
    int ganjil[10];
    int jumGenap = 0;
    int jumGanjil = 0;

    cout << "Masukkan 10 angka: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Angka ke-" << i + 1 << ": ";
        cin >> data[i];
    }

    cout << "Data Array: ";
    for (int i = 0; i < 10; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 10; i++) {
        if (data[i] % 2 == 0) {
            genap[jumGenap] = data[i];
            jumGenap++;
        } else {
            ganjil[jumGanjil] = data[i];
            jumGanjil++;
        }
    }

    cout << "Nomor Genap: ";
    for (int i = 0; i < jumGenap; i++) {
        cout << genap[i];
        if (i < jumGenap - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    cout << "Nomor Ganjil: ";
    for (int i = 0; i < jumGanjil; i++) {
        cout << ganjil[i];
        if (i < jumGanjil - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}
