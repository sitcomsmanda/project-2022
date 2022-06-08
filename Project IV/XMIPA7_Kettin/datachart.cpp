#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main(){
    array <int, 5> jumlahsiswa;
    cout << "[]==| SELAMAT DATANG DI PROGRAM PENAMPIL GRAFIK NILAI |==[]" << endl << endl;

    for ( int i = 0; i < jumlahsiswa.size(); i++){
        cout << "Masukkan jumlah siswa dengan nilai ";
        if ( i == 0 ){
            cout << "A : ";
        }else if ( i == 1 ){
            cout << "B : ";
        }else if ( i == 2){
            cout << "C : ";
        }else if ( i == 3 ){
            cout << "D : ";
        }else if ( i == 4){
            cout << "E : ";
        }
        cin >> jumlahsiswa[i];
    }
    cout << endl;

    cout << "Grafik Nilai" << endl << endl;
    for ( int i = 0; i < jumlahsiswa.size(); i++){
        if ( i == 0 ){
            cout << "  |\nA | ";
        }else if ( i == 1 ){
            cout << "  |\nB | ";
        }else if ( i == 2){
            cout << "  |\nC | ";
        }else if ( i == 3 ){
            cout << "  |\nD | ";
        }else if ( i == 4){
            cout << "  |\nE | ";
        }
        for( int x = 0; x < jumlahsiswa[i]; x++){
            cout << "*";
        }
        cout << " (" << jumlahsiswa[i] << ")" << endl;
    }
    cout << "  |\n--|-------";
    for ( int i = 0; i <= (*max_element( jumlahsiswa.begin(), jumlahsiswa.end())); i++){
        cout << "-";
    }
    cout << endl << endl;
    cin.get();
    return 0;
}