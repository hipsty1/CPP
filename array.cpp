#include <iostream>
using namespace std;

int main(){
    // membuat array
    int nilai[5];                   // tipe array 1
    int angka[5] = {1,2,3,4,5};     // tipe array 2
    // mengisi array 1
    nilai[0] = 10;
    nilai[1] = 20;
    nilai[2] = 30;
    nilai[3] = 40;
    nilai[4] = 50;
    // menampilkan array
    cout << &nilai[0] << " nilainya adalah " << nilai[0] << endl;
    cout << &nilai[1] << " nilainya adalah " << nilai[1] << endl;
    cout << &nilai[2] << " nilainya adalah " << nilai[2] << endl;
    cout << &nilai[3] << " nilainya adalah " << nilai[3] << endl;
    cout << &nilai[4] << " nilainya adalah " << nilai[4] << endl << endl;
    // mengubah nilai array
    int *ptr = nilai;
    *(ptr + 2) = 6; // nilai[2] = 6 sama dengan *(nilai + 2) = 6
    nilai[3] = 7;   // nilai[3] = 7 sama dengan *(nilai + 3) = 7
    cout << &nilai[0] << " nilainya adalah " << nilai[0] << endl;
    cout << &nilai[1] << " nilainya adalah " << nilai[1] << endl;
    cout << &nilai[2] << " nilainya adalah " << nilai[2] << endl;
    cout << &nilai[3] << " nilainya adalah " << nilai[3] << endl;
    cout << &nilai[4] << " nilainya adalah " << nilai[4] << endl << endl;
    // menampilkan ukuran array
    cout << "ukuran array = " << sizeof(nilai) << " byte" << endl;
    // menampilkan jumlah array
    cout << "jumlah array = " << sizeof(nilai) / sizeof(int) << " buah" << endl;
    return 0;
}
// array adalah kumpulan data yang memiliki tipe data yang sama.
// cara deklarasi array => int var [] = {a,b,c,...};
// index array  dimulai dari 0.