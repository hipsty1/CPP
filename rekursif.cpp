#include <iostream>
using namespace std;

//menggunakan fungsi dan looping.
int pangkatIterasi(int a, int b){
    int hasil = a;
    for(int i = 1; i < b; i++){
        hasil = hasil * a;
    }
    return hasil;
}

//menggunakan rekursif (suatu fungsi yang memanggil fungsi itu sendiri).
int pangkatRekursif(int a, int b){
    if(b == 1){
        return a;
    }else{
        return a * pangkatRekursif(a, (b-1));       //memanggil fungsi itu dengan nilai b dikurangi 1.
    }
}

int main(){
    int n, p;
    cout << "masukkan nilai : "; cin >> n;
    cout << "masukkan pangkat : "; cin >> p;
    cout << "hasil pangkat iterasi : " << pangkatIterasi(n,p) << endl;
    cout << "hasil pangkat rekursif : " << pangkatRekursif(n,p) << endl;
    return 0;
}