#include <iostream>
using namespace std;

//default argumen, memberikan nilai default untuk suatu variabel di sebuah fungsi.
int volumeKubus(double p = 1, double l = 1, double t = 1);

int main (){
    cout << "volume kubus : " << volumeKubus(5,6,7) << endl;
    cout << "volume kubus : " << volumeKubus(5,6) << endl;
    cout << "volume kubus : " << volumeKubus(5) << endl;
    cout << "volume kubus : " << volumeKubus() << endl;
    return 0;
}

int volumeKubus(double p, double l, double t){
    return p * l * t;
}