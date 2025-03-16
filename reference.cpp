#include <iostream>
using namespace std;

int main(){
    int a = 5;
    cout << "nilai a adalah " << a << endl;
    cout << "alamat a adalah " << &a << endl;

    int &b = a;
    cout << "nilai b adalah " << b << endl;
    cout << "alamat b adalah " << &b << endl;

    b = 10;
    cout << "nilai a adalah " << a << endl;     //nilai a = b karena data pada alamat yang sama dirubah.
    cout << "nilai b adalah " << b << endl;
    return 0;
}

//reference digunakan untuk menyimpan data di alamat yang sama namun dengan nama var yang berbeda.