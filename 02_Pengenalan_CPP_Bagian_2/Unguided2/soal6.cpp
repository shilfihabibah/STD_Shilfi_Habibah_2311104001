#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan elemen-elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    while (true) {
        cout << "\nMenu: ";
        cout << "1. Cari Nilai Maksimum ";
        cout << "2. Cari Nilai Minimum ";
        cout << "3. Cari Nilai Rata-rata ";
        cout << "4. Keluar ";
        cout << "Pilih menu: ";
        int pilih;
        cin >> pilih;

        switch (pilih) {
            case 1:
                cout << "Nilai Maksimum: " << cariMaksimum(arr, n);
                break;
            case 2:
                cout << "Nilai Minimum: " << cariMinimum(arr, n);
                break;
            case 3:
                cout << "Nilai Rata-rata: " << cariRataRata(arr, n);
                break;
            case 4:
                return 0;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.";
        }
    }
    return 0;
}

int cariMaksimum(int arr[], int n) {
    int maksimum = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maksimum) {
            maksimum = arr[i];
        }
    }
    return maksimum;
}

int cariMinimum(int arr[], int n) {
    int minimum = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }
    return minimum;
}

double cariRataRata(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (double) sum / n;
}
