#include <iostream>

using namespace std;

int faktorial( int x ){
        if (x<=1){
            cout << "1 = ";
            return 1;
            
        }
        cout << x << " * ";
        return x * faktorial(x-1);
    }

int main (){

    int x;

    cout <<"[]=| Selamat Datang di Program Kalkulator Faktorial! |=[]" << endl;

    cout << "[]=| Masukkan bilangan ke - n: ";
    cin >> x;

    cout << "[]=| Hasil = " << faktorial(x) << endl;

    cin.get();
    return 0;
}