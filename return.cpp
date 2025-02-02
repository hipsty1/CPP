#include <iostream>
using namespace std;

int kuadrat(int a){         //struktur normal fungsi return
    return a*a;             //fungsi return atau kembalian
}

int kali(int a, int b){     //input dua
    return a * b;
}

int main(){
    int x, y;
    cout << "masukkan nilai x : "; cin >> x;
    cout << "masukkan nilai y : "; cin >> y;
    cout << "kuadrat x adalah " << kuadrat(x) << endl;                  //memanggil fungsi return
    cout << "hasil kali dari x dan y adalah : " << kali(x,y) << endl;   //memanggil fungsi return
    return 0;
}