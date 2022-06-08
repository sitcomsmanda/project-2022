#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void printGrade(int i);

int main() {

    array < int, 5 > grades;

    cout << "\n[]=| Data Chart Program\n" << endl;

    for( int i = 0; i < grades.size(); i++ ){

        cout << "[]=| Masukkan jumlah siswa yang mendapatkan nilai ";

        printGrade(i);
        cout << ": ";

        cin >> grades[i];

    }
    cout << endl;

    for( int i = 0; i < grades.size(); i++ ){
    cout << "\n  | \n";

        for( int x = 0; x < grades[i]; x++ ){
            cout << "*";
        }

        cout << " -" << grades[i];

    }
    cout << "\n__|_____";

    int max_value = *max_element(grades.begin(), grades.end());

    for( int i = 0; i < max_value; i++ ){
        cout << "_";
    }

    cout << endl;
    cin.get();
    return 0;
}

void printGrade( int i ){
    if ( i == 0 ){
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