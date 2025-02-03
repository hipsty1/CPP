#include <iostream>
using namespace std;

void tampilkan(int input){      //biasa disebut worker
    cout << "data yang anda input adalah " << input << endl;
}                               //void tidak memerlukan return

int main(){
    int input;
    cout << "masukan nilai : "; cin >> input;
    tampilkan(input);           //contoh sederhana pemanggilan void
}