#include <iostream>

using namespace std;

int fibonacci(int n){
    if ((n==0) || (n==1)){
        return n;
    } else {
        return fibonacci (n-1) + fibonacci (n-2);
    }
}

int main(){
    int n;

    cout << "Bilangan ke - : ";
    cin >> n;

    int hasil;
    hasil = fibonacci(n);

    cout << "Bilangan ke - " << n << " adalah " << hasil << endl;

    cin.get();
    return 0;
}