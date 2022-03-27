#include <iostream>

using namespace std;

int main()
{
    int a, b, hasil;
    char operasi;
    

    cout << "Selamat Datang di Program Kalkulator" << endl;

    cout << "Masukkan nilai pertama: ";
    cin >> a;

    cout << "Masukkan jenis operasi +, -, *, /: ";
    cin >> operasi;

    cout << "Masukkan nilai kedua: ";
    cin >> b;

    if (operasi == '+'){
        hasil = a + b;
    } else if (operasi == '-'){
        hasil = a - b;
    } else if (operasi == '*'){
        hasil = a * b;
    } else if (operasi == '/'){
        hasil = a / b;
    } else {
        cout << "operasi anda salah" << endl;
    }

    cout << a << operasi << b << "=" << hasil << endl;

    return 0;
}
