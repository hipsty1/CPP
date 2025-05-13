#include <iostream>
#include <array>
using namespace std;

const int kolom = 3;
const int baris = 2;

int main(){
    // array multidimensi pada library array.
    array < array <int,kolom>, baris> nilaiMD ={0,1,2,3,4,5};
    cout << nilaiMD[0][0] << " ";
    cout << nilaiMD[0][1] << " ";
    cout << nilaiMD[0][2] << endl;
    cout << nilaiMD[1][0] << " ";
    cout << nilaiMD[1][1] << " ";
    cout << nilaiMD[1][2] << endl;
    return 0;
}