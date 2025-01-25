#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "berulang sebanyak : "; cin >> a;

    //looping
    for(int b = 1; b <= a; b++){ //for(inisialisasi; kondisi; in/decrement){statement}
        cout << b << ". angka ke-" << b << endl;
    }
    return 0;
}

//for looping sama dengan while looping.
//hanya dibedakan oleh syntaxnya saja.
//dalam beberapa kasus for looping lebih efisian begitu juga sebaliknya.