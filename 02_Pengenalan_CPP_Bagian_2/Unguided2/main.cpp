/*#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}*/

#include <iostream>

using namespace std;

int kendaraan(int kapasitas_kendaraan, int jumlah_penumpang)
      int jumlah;
      jumlah = jumlah_penumpang / kapasitas_kendaaraan;
      if (jumlah_penumpang % kapasitas_kendaraan > 0){
        jumlah++;
      }

int main(){
    int kap_kendaraan, jum_penumpang, banyak_kendaraan;
    cout << " Masukkan kapasitas kendaraan: ";
    cin >> kap_kendaraan;
    cout << " Masukkan jumlah kendaraan: ";
    cin >> jum_kendaraan;
    banyak_kendaraaan = kemdaraan(kap_kendaraan, jum_penumpaang);
    cout << " Banyak kendaraan yang disewa " << banyak_kendaraan << endl;
    return 0;
}

#include <iostream>

using namespace std;

void tukar(int * a, int*b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int bil1, bil2;
    cout << " Masukkan bilangan pertama: ";
    cin >> bil1;
    cout
    << " Masukkan bilangan kedua: ";
    cin >> bil2;
    cout << " Sebelum pertukaran:\n ";
    cout << " Bil 1; " << bil1 << " bil 2: "   << bil2 << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main(){
    int bil[10];
    bil[0] = 1;
    bil[1] = 4;
    bil[2] = 5;
    cout << bil[0] << endl;
    cout << bil[1] << endl;
    cout << bil[2] << endl;
    cout << bil[0] + bil[1] + bil[2] << endl;
    return 0;
}

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

#include <iostream>

using namespace std;

int main() {
    int x, y, z;

    // Input ukuran array
    cout << "Masukkan ukuran array 3D (x, y, z): ";
    cin >> x >> y >> z;

    // Deklarasi array 3D
    int*** arr = new int**[x];

    // Inisialisasi array 3D
    for (int i = 0; i < x; i++) {
        arr[i] = new int*[y];
        for (int j = 0; j < y; j++) {
            arr[i][j] = new int[z];
        }
    }

    // Input elemen array
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "Masukkan elemen [" << i << "][" << j << "][" << k << "]: ";
                cin >> arr[i][j][k];
            }
        }
    }

    // Tampilkan array
    cout << "Array 3D:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // Hapus memori
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            delete[] arr[i][j];
        }
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}

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
