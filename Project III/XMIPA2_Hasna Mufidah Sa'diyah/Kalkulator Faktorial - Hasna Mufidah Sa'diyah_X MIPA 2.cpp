#include <iostream>

using namespace std;

//! Deklarasi Prototype 
int faktorial (int n);

int main ()
{

    //! Deklarasi Variabel n
    int n;

    //! Output Main Menu
    cout << "[]=| Program Kalkulasi !Faktorial" << endl;

    //! Input Bilangan Ke-n
    cout << "[]=| Masukkan Bilangan Ke-n: ";
    cin >> endl;
    cout << endl;

    cout << "[]=| " << faktorial (n) << endl;

    cout << endl;
    cin.get();
    return 0;
}

int faktorial(int n)
{
    if (n <= 1)
    {
        cout << n << " = ";
        return 1;
    }
    else 
    {
        cout << n << " * ";
        return n * faktorial(n - 1);
    }
}