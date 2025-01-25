#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "masukkan nilai : "; cin >> a;

    //switch case
    switch(a){
        case 1:
            cout << "angka 1" << endl;
            break; //agar program selanjutnya dari case tidak dieksekusi.
        case 2:
            cout << "angka 2" << endl;
        case 3:
            cout << "angka 3" << endl;
        case 4:
            cout << "angka 4" << endl;
        case 5:
            cout << "angka 5" << endl;
        default:
            cout << "default" << endl;
    }
    return 0;
}

//sama halnya denga if else statemen, switch case merupakan sebuah pengondisian.