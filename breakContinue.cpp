#include <iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 5; i++){
        if(i==2) continue;  //melewati i dengan nilai 2.
        cout << i << endl;
    }
    for(int j = 6; j <= 10; j++){
        cout << j << endl;
        if(j==7) break;     //menghentikan program ketika j bernilai 7.
    }
    return 0;
}