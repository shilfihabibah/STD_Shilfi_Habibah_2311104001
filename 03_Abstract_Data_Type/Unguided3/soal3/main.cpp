#include <iostream>
using namespace std;

// Fungsi untuk menampilkan isi array 2D
void printArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Fungsi untuk menukar elemen pada posisi tertentu dalam dua array 2D
void swapElements(int arr1[3][3], int arr2[3][3], int row, int col) {
    int temp = arr1[row][col];
    arr1[row][col] = arr2[row][col];
    arr2[row][col] = temp;
}

// Fungsi untuk menukar isi dari dua variabel yang ditunjuk oleh dua pointer
void swapPointers(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    // Deklarasi dua array 2D berukuran 3x3
    int array1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int array2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    // Deklarasi dua buah pointer integer
    int a = 100, b = 200;
    int* ptr1 = &a;
    int* ptr2 = &b;

    // Menampilkan isi kedua array sebelum penukaran
    cout << "Array 1 sebelum swap:" << endl;
    printArray(array1);
    cout << "Array 2 sebelum swap:" << endl;
    printArray(array2);

    // Menukar elemen pada posisi (1,1) dari kedua array
    swapElements(array1, array2, 1, 1);

    // Menampilkan isi kedua array setelah penukaran
    cout << "\nArray 1 setelah swap:" << endl;
    printArray(array1);
    cout << "Array 2 setelah swap:" << endl;
    printArray(array2);

    // Menampilkan nilai variabel yang ditunjuk oleh pointer sebelum penukaran
    cout << "\nNilai sebelum swap pointer: ptr1 = " << *ptr1 << ", ptr2 = " << *ptr2 << endl;

    // Menukar isi variabel yang ditunjuk oleh ptr1 dan ptr2
    swapPointers(ptr1, ptr2);

    // Menampilkan nilai variabel yang ditunjuk oleh pointer setelah penukaran
    cout << "Nilai setelah swap pointer: ptr1 = " << *ptr1 << ", ptr2 = " << *ptr2 << endl;

    return 0;
}
