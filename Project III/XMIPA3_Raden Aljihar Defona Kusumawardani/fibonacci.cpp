#include <iostream>

using namespace std;

int fibonacci(int n);

int main(){
    int angka, hasil;
    cout << "menghitung fibonacci : ";
    cin >> angka;
    hasil = fibonacci(angka);

    cout << "nilainya adalah : " << hasil << endl;
    
    cin.get();
    return 0;
}

int fibonacci(int n){
    if((n == 0) || (n == 1)){
        return n;
    }else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}