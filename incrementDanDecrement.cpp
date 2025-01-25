#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 5;

    //postincrement
    cout << "postincrement" << endl;
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl << endl;

    //preincrement
    cout << "preincrement" << endl;
    cout << b << endl;
    cout << ++b << endl;
    cout << b << endl << endl;

    //postdecrement
    cout << "postdecrement" << endl;
    cout << a << endl;
    cout << a-- << endl;
    cout << a << endl << endl;

    //predecrement
    cout << "predecrement" << endl;
    cout << b << endl;
    cout << --b << endl;
    cout << b << endl;
    return 0;
}

//increment = angka + 1
//decreme = angka - 1
//post dilaksanakan setelahnya
//pre dilaksanakan sebelumnya