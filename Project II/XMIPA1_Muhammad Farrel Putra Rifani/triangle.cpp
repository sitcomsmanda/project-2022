#include <iostream>

using namespace std;

int main () {

    int n;

    cout << "Masukkan Bilangan Ke-N: ";
    cin >> n;

    // Pola 1 - Segitiga Siku Siku
    cout << "\n[]=| Pola I - Segitiga Siku Siku\n\n";

    for ( int i = 1; i <= n; i++ ){

        for ( int j = 1; j <= i; j++ ){
            cout << "*";
        }

        cout << endl;

    }

    cout << endl;

    // Pola 2 - Segitiga Siku Siku
    cout << "\n[]=| Pola II - Segitiga Siku Siku\n\n";

    for ( int i = 1; i <= n; i++ ){

        for ( int k = 1; k < i; k++ ){
            cout << "-";
        }

        for ( int j = n; j >= i; j-- ){
            cout << "*";
        }

        cout << endl;

    }

    cout << endl;

    // Pola 1 - Segitiga Sama Kaki
    cout << "\n[]=| Pola I - Segitiga Sama Kaki\n\n";

    for ( int i = 1; i <= n; i++ ){

        for ( int j = n; j > i; j-- ){
            cout << " ";
        }

        for ( int k = 1; k <= (2 * i - 1); k++){
            cout << "*";
        }

        cout << endl;

    }

    cout << endl;

    // Pola 2 - Segitiga Sama Kaki
    cout << "\n[]=| Pola II - Segitiga Sama Kaki\n\n";

    for ( int i = 1; i <= n; i++ ){

        for ( int j = 1; j < i; j++ ){
            cout << " ";
        }

        for ( int k = n; k >= (2 * i - n); k-- ){
            cout << "*";
        }

        cout << endl;

    }

    cout << endl;

    cin.get();
    return 0;
}