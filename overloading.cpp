#include <iostream>
using namespace std;

//basic function
int luas(int panjang, int lebar){
    return panjang * lebar;
}

//overloading 1
int luas(int sisi){
    return sisi * sisi;
}

//overloading 2
double luas(double sisi){
    return sisi * sisi;
}

int main(){
    cout << "luas kotak 2 x 3 : " << luas(2,3) << endl;
    cout << "luas kotak 2 x 2 : " << luas(2) << endl;
    cout << "luas kotak 2.5 x 2.5 : " << luas(2.5) << endl;
    return 0;
}

//overloaing adalah suatu fungsi untuk menimpa fungsi lainnya yang memilii nama sama.