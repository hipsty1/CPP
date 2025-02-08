#include <iostream>
using namespace std;

int main (){
    int a = 5;
    //pointer
    int *ptr = &a;
    //int a mempunyai nilai dan address (alamat).
    cout << "nilai dari a : " << a << endl;
    cout << "alamat dari a : " << ptr << endl;
    //dereferancing, mengambil data dari sebuah pointer.
    a = 10;
    cout << "mengambil nilai dari pointer : " << *ptr << endl;
    return 0;
}
// '*' digunakan untuk mengambil/mengakses nilai yang disimpan di alamat yang dipegang oleh pointer.
// '&' digunakan untuk mendapatkan alamat memori dari suatu variabel.