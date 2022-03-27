#include <iostream>
using namespace std;
int main (){

int n;
cout << "Masukkan Bilangan Ke-n: ";
cin >> n;

cout << "POLA I" << endl;

for (int i= 1; i <= n; i++){
    for ( int j = 1; j <= i; j++){
        cout << "*";

    }

    cout << endl;
}

cout << endl;

cout << "POLA II" << endl;

for (int i= 1; i <= n; i++){

    for (int k = 1; k < i; k++){
        cout << " ";
    }

    for ( int j = n; j >= i; j--){
        cout << "*";

    }
    cout << endl;
    }

    cout << endl;



   

    cin.get();
    return 0;
}