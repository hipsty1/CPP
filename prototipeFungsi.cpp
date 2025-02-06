#include <iostream>
using namespace std;

//prototipe fungsi
int hitungLuas(double a, double b);
void printl(double x);

int main(){
    double p, l, luas;
    cout << "masukkan panjang : "; cin >> p;
    cout << "masukkan lebar : "; cin >> l;
    luas = hitungLuas(p,l);
    printl(luas);
    return 0;
}

int hitungLuas(double a, double b){
    return a * b;
}

void printl(double x){
    cout << "hasilnya adalah " << x << endl;
}