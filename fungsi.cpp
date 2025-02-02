#include <iostream>
#include <cmath>    //fungsi/function/method untuk perhitungan matematika
using namespace std;

int main(){
    int x;
    cout << "menghitung akar dari x: "; cin >> x;

    double y = sqrt(x);     //sqrt() merupakan salah satu library yang ada dalam cmath
    cout << "akarnya adalah " << y << endl;    
    return 0;       
}