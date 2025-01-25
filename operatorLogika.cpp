#include <iostream>
using namespace std;

int main(){
    int a = 1;
    int b = 2;
    bool hasil;

    //operator logika
    cout << "Jika jawaban 1 (true/benar) dan 0 (else/salah)" << endl;
    cout <<  endl;

    //operator negasi
    cout << "operator negasi" << endl;
    cout << !(a==1) << endl;    // negasi true = false
    cout << !(a==2) << endl;    // negasi false = true
    cout << endl;
    
    //operator dan (and/&&)
    cout << "operator and" << endl;
    hasil = (a==1) && (b==2);   //true and true
    cout << hasil << endl;
    hasil = (a==1) && (b==1);   //true and false 
    cout << hasil << endl;
    hasil = (a==2) && (b==2);   //false and true
    cout << hasil << endl;
    hasil = (a==2) && (b==1);   //false and false
    cout << hasil << endl;
    cout << endl;

    //operator or (or/||)
    cout << "operator or" << endl;
    hasil = (a==1) || (b==2);   //true or true
    cout << hasil << endl;
    hasil = (a==1) || (b==1);   //true or false 
    cout << hasil << endl;
    hasil = (a==2) || (b==2);   //false or true
    cout << hasil << endl;
    hasil = (a==2) || (b==1);   //false or false
    cout << hasil << endl;
    cout << endl;
    return 0;
}

//suatu logika yang digunakan dalam pemrograman.