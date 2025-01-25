#include <iostream>
using namespace std;

int main(){
    //assignment
    int a = 3;
    cout << "nilai awal adalah " << a << endl;
    //operator assignment
    a += 3;
    cout << "ditambah 3 menjadi " << a  << endl;
    a -= 3;
    cout << "dikurang 3 menjadi " << a  << endl;
    a *= 3;
    cout << "dikali 3 menjadi " << a  << endl;
    a /= 3;
    cout << "dibagi 3 menjadi " << a  << endl;
    return 0;
}

/*
assignment:
(tipe data) (variabel) (=) (data) (;)
--> int angka = 10;

operator assignment:
(variabel) (=) (variabel) (operator aritmatika) (data) (;)
angka = angka + 10;
(variabel) (operator)(=) (data) (;)
angka += 10;
*/