#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "input nilai : "; cin >> a;

    //if else statement
    if(a<5){
        cout << "nilai kurang dari 5" << endl;
    }else if(a>5){
        cout << "nilai lebih dari 5" << endl;
    }else{
        cout << "ini adalah 5" << endl;
    }
    return 0;
}

//pengondisian atau percabangan dengan melakukan sebuah syntax sesuai dengan syarat.
//ketika syarat terpenuhi maka akan menjalankan syntax di dalam if else statement.
//ketika tidak terpenuhi maka akan melewati syntax di ddalam if else statement.