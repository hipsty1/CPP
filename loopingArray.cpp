#include <iostream>
using namespace std;

int main(){
    int arrayNilai[] = {1, 2, 3, 4, 5};
    // looping array
    /*
    for(deklarasi variabel : array){
        statement
    }
    */
    for(int nilai : arrayNilai){
        cout << nilai << endl;
    }
    //memanipulasi array
    cout << endl;
    for(int &nilai : arrayNilai){
        nilai += 3;
    }
    for(int nilai : arrayNilai){
        cout << nilai << endl;
    }
    return 0;
}