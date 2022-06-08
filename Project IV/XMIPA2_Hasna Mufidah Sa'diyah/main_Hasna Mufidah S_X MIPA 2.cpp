#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

//! Prototype
void printGrade(int i);


int main(){

    //! Deklarasi Array
    array < int, 5 > grades;

    //! Output Main Menu
    cout << "\n[]=| Data Chart Program\n" << endl;

    //! Looping Input Grade dari User 
    for( int i = 0; i < grades.size(); i++){
    cout << "[]=| Masukan jumlah siswa yang mendapatkan nilai ";

    // Memanggil fungsi printGrade
    printGrade(i);
    cout << ": ";

    cin >> grades[i];

    }
    cout << endl;

    //! Looping untuk output grafik (chart)
    for(int i = 0; i < grades.size(); i++){
    cout << "\n | \n";

    // Memanggil fungsi printGrade
    printGrade(i);
    cout << " | ";

    //! Looping sesuai jumlah siswa yg dapat nilai tersebut 
    for( int x = 0; x < grades[i]; x++){
        cout << "*";
    }

    cout << " -" << grades[i];
    }

    cout << "\n__|_____";

    //! Menemukan nilai maksimum di array Grades
    int max_value = *max_element(grades.begin(), grades.end());

    //! Looping untuk garis bawah 
    for(int i = 0; i < max_value; i++){
    cout << "_";
    }

    cout << endl;
    cin.get();
    return 0;
}


//! Function untuk menampilkan grade sesuai index looping
void printGrade(int i) {
    // Output sesuai index looping
    if( i == 0 ){
        cout << "A";
    } else if ( i == 1 ){
        cout << "B";
    } else if ( i == 2 ){
        cout << "C";
    } else if ( i == 3 ){
        cout << "D";
    } else if ( i == 4 ){
        cout << "E";
    }
}