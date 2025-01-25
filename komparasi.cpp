#include <iostream>
using namespace std;

int main(){
    int a = 3;
    int b = 5;
    bool hasil;

    //sebanding
    hasil = (a == b);
    cout << hasil << endl;
    //tidak sebanding
    hasil = (a != b);
    cout << hasil << endl;   
    //kurang dari
    hasil = (a < b);
    cout << hasil << endl;    
    //lebih dari
    hasil = (a > b);
    cout << hasil << endl;   
    //kurang atau sama dengan dari
    hasil = (a <= b);
    cout << hasil << endl;   
    //lebih atau sama dengan dari
    hasil = (a >= b);
    cout << hasil << endl;   

    cout << "Jika jawanan 1 (true atau benar).\nJika jawaban 0 (false atau salah)." << endl;
    //tipe data yang digunakan adalah bool(boolean) dimana tipe data ini hanya berisi 1 (true) dan 0 (false).

    return 0;
}

//sebuah perbandingan data dengan memanfaatkan data tipe boolen sebagai pembuktian benar atau salah.