#include <iostream>
using namespace std;

int main () {
int a,b,hasil;
char aritmatika;

cout<<"kalkulator sederhana" <<endl;

cout<<"masukkan angka pertama: ";
cin>> a;
cout << "pilih operator: ";
cin >> aritmatika;
cout<<"masukkan angka kedua: ";
cin>> b;

cout<<"hasil: " ;
cout<< a << aritmatika << b;

if (aritmatika == '+'){
    hasil = a + b;
} else if (aritmatika == '-'){
    hasil = a - b;
} else if (aritmatika == '*'){
    hasil = a * b;
} else if (aritmatika == '/'){
    hasil = a / b; 
} else {
    cout<<"operator anda salah"<<endl;
}
    
cout<<"="<< hasil << endl;

cin.get();
cin.get();
    return 0;
}

