#include <iostream>
using namespace std;

int main(){
    int a = 9;
    int b = 2;
    float c = 9.0;
    int hasil;
    float hasill;

    //operasi aritmatika
    //penjumlahan
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;

    //pengurangan
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;

    //perkalian
    hasil = a * b;
    cout << a << " x " << b << " = " << hasil << endl;

    //pembagian
    hasill = c / b;
    cout << c << " : " << b << " = " << hasill << endl;

    //modulus (sisa pembagian)
    hasil = a % b;
    cout << a << " dibagi " << b << " sisa " << hasil << endl;

    //oprasi campuran
    hasill = a + b * (c - b);
    cout << a << " + " << b << " x ( " << c << " - " << b << " ) = " << hasill << endl;

    return 0;
}

//perhitungan matematika dalam pemrograman (+ / - / x / : / sisa pembagian).