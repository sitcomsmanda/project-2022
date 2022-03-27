#include <iostream>

using namespace std;

int main (){

// Inisialisasi Variabel
    int n;

// Input Nilai n
    cout << "\nMasukkan nilai n: ";
    cin >> n;

// Pola Segitiga Siku - Siku 1
    cout << "\nPola Segitiga Siku - Siku 1\n" << endl;
    for ( int i = 1; i <= n; i++ ){
        for ( int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

// Pola Segitiga Siku - Siku 2
    cout << "\nPola Segitiga Siku - Siku 2\n" << endl;
    for ( int i = 1; i <= n; i++ ){
        for ( int j = n; j > i; j--){
            cout << "  ";
        }
        for ( int k = 1; k <= i; k++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

// Pola Segitiga Sama Kaki 1
    cout << "\nPola Segitiga Sama Kaki 1\n" << endl;
    for ( int i = 1; i <= n; i++ ){
        for ( int j = n; j > i; j-- ){
            cout << "  ";
        }
        for ( int k = 1; k <= i; k++ ){
           cout << "* ";
        }
        for ( int k = 2; k <= i; k++ ){
            cout << "* ";
        }
        cout << endl;
    }

// Siap Kang Teh setelah menyontek dari vedio ternyata caranya yang lebih mudah
// Pola Segitiga Sama Kaki 1
    /* cout << "\nPola Segitiga Sama Kaki 1\n" << endl;
    for ( int i = 1; i <= n; i++ ){
        for ( int j = n; j > i; j-- ){
            cout << "  ";
        }
        for ( int k = 1; k <= (i * 2 - 1 ); k++ ){
           cout << "* ";
        }
        cout << endl;
    } */

// Pola Segitiga Sama Kaki 2
    cout << "\nPola Segitiga Sama Kaki 2\n" << endl;
    for ( int i = 1; i <= n; i++ ){
        for ( int j = 1; j < i; j++ ){
            cout << "  ";
        }
        for ( int k = n; k >= i; k-- ){
           cout << "* ";
        }
        for ( int k = (n-1); k >= i; k-- ){
            cout << "* ";
        }
        cout << endl;
    }

// Pola Segitiga Sama Kaki 2
    /* cout << "\nPola Segitiga Sama Kaki 2\n" << endl;
    for ( int i = 1; i <= n; i++ ){
        for ( int j = 1; j < i; j++ ){
            cout << "  ";
        }
        for ( int k = n ; k >= ( i * 2 - n); k-- ){
           cout << "* ";
        }
        cout << endl; 
    }*/
    cout << endl;

    cin.get();
    return 0;
}