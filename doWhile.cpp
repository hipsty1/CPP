#include <iostream>
using namespace std;

int main(){
    int a;
    int b = 1;
    cout << "masukkan perulangan : "; cin >> a;

    //looping
    do{
        cout << b << ". angka ke-" << b << endl;
        b++;
    }while(b <= a); //syarat loop, b lebih kecil sama dengan a.
    return 0;
}

//looping minimal satu kali.
//melakukan aksi terlebih dahulu baru mengecek syarat.