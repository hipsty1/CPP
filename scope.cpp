#include <iostream>
using namespace std;

int x = 10;                                             //variabel global

int ambilGlobal(){
    return x;
}

int lokalFungsi(){
    int x = 3;                                          //variabel lokal fungsi
    return x;
}

int main(){
    cout << "1. variael global : " << x << endl;
    int x = 5;                                          //variabel lokal main
    cout << "2. variabel lokal main : " << x << endl;
    cout << "3. variabel lokal ambilGlobal : " << ambilGlobal() << endl;
    cout << "4. variabel lokal main : " << x << endl;
    cout << "5. variabel lokal lokalFungsi : " << lokalFungsi() << endl;
    cout << "6. variabel lokal main : " << x << endl;
    {
    cout << "7. variabel lokal main : " << x << endl;
    int x = 1;                                          //variabel blok
    cout << "8. variabel lokal main : " << x << endl;
    cout << "9. variabel global : " << ::x << endl;     //cara lain memangggil nilai paling atas '::namaVar'
    }
    cout << "10. variabel lokal main : " << x << endl;

    return 0;
}