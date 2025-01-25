#include <iostream>
using namespace std;

int main(){
    int a;
    int b = 1;
    cout << "berulang sebanyak : "; cin >> a;

    //looping
    while(a >= b){   //syarat loop, a lebih besar atau sama dengan b.
        cout << b << ". angka ke-" << b << endl;
        b++;
    }
    return 0;
}

//looping atau perulagan sesuai dengan syarat.