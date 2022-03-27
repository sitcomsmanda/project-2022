#include <iostream>

using namespace std;

int faktorial(int n);

int main(){

    int n;

    cout << "[]=| Program Kalkulasi !Faktorial" << endl;

    cout << "[]=| Masukkan Bilangan Ke-n: ";
    cin >> n;
    cout << endl;

    cout << "[]=| " << faktorial(n) << endl;

    cout << endl;
    cin.get();
    return 0;
}

int faktorial(int n){
    if (n <= 1){
        cout << n << " = ";
        return 1;
    } else {
        cout << n << " * ";
        return n * faktorial(n - 1);
    }
}