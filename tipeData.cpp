#include <iostream>
using namespace std;

int main(){
    //nilangan bulat
    //integer
    int a = 20000000;
    cout << a << " adalah data integer, dengan besar : " << sizeof(a) << " byte" << endl;
    cout << "nilai maksimum data : " << INT32_MAX << endl;
    cout << "nilai minimum data : " << INT32_MIN << endl;
    //integer (namun lebih panjang)
    unsigned x = 40000000;
    cout << x << " adalah data integer, dengan besar : " << sizeof(x) << " byte" << endl;
    //long (bilangan bulat namunn nilai max dan min lebih panjang)
    long b = 2000000000;
    cout << b << " adalah data long, dengan besar : " << sizeof(b) << " byte" << endl;
    //short (bilangan bulat namunn nilai max dan min lebih pendek)
    short c = 2000;
    cout << c << " adalah data short, dengan besar : " << sizeof(c) << " byte" << endl << endl;

    //bilangan desimal
    //float
    float d = 2.2;
    cout << d << " adalah data float, dengan besar : " << sizeof(d) << " byte" << endl;
    //double
    double e = 2.22222;
    cout << e << " adalah data double, dengan besar : " << sizeof(e) << " byte" << endl << endl;

    //karakter
    //char
    char f = 'H';
    cout << f << " adalah data charakter, dengan besar : " << sizeof(f) << " byte" << endl << endl;

    //benar salah (bolean)
    //bool
    bool g = true; //true or false
    cout << g << " adalah data bolean (1=true, 0=false), dengan besar : " << sizeof(g) << " byte" << endl << endl;

    return 0;
}

//tipe-tipe data yang dapat digunakann di bahasa pemrograman C++.