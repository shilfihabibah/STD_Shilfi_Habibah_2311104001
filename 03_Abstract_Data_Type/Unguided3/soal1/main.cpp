#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct mahasiswa{
    char nama[50];
    char nim[10];
    int nilaiuts,nilaiuas,tugas;
};

void inputMhs(mahasiswa &m);
float akhir(mahasiswa m);

int main()
{
    mahasiswa mhs;
    inputMhs(mhs);
    cout <<"Nilai Akhir = " <<akhir(mhs);
    return 0;
}

void inputMhs(mahasiswa &m){
    cout << "input Nama = ";
    cin >> (m).nama;
    cout << "input Nim = ";
    cin >> (m).nim;
    cout << "input Nilai UTS = ";
    cin >> (m).nilaiuts;
    cout << "input Nilai UAS = ";
    cin >> (m).nilaiuas;
    cout << "input Nilai Tugas = ";
    cin >> (m).tugas;
}

float akhir(mahasiswa m){
    return (0.4*m.nilaiuas+0.3*m.nilaiuts+0.3*m.tugas);
}

