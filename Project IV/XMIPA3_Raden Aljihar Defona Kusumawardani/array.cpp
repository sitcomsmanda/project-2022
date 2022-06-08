#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

void printGrade(int i);

int main(){
    array < int, 5 > grades;

    //Main menu
    cout << "\n Data Chart Program \n" << endl;

    //Looping input grade
    for(int i = 0; i < grades.size(); i++){
        cout << "Masukkan jumlah siswa yang memperoleh nilai ";

    //Fungsi printGrade
        printGrade(i);
        cout << ": ";

        cin >> grades[i];

    }
    cout << endl;

    //Looping output grafik
    for(int i = 0; i < grades.size(); i++){
        cout << "\n  | \n";

    //Fungsi printGrade
    printGrade(i);
    cout << " | ";

    //Looping jumlah siswa
    for(int x = 0; x < grades[i]; x++){
        cout << "*";
    }
    cout << " -" << grades[i];
    }
    cout << "\n__|_____";

    //Nilai maksimum di Array Grades
    int max_value = *max_element(grades.begin(), grades.end());

    //Looping garis bawah
    for(int i = 0; i < max_value; i++){
        cout << "_";
    }
    cout << endl;
    cin.get();
    return 0;
}

//Fungsi untuk menampilkan grade yang sesuai
void printGrade(int i){
    //Output
    if(i == 0){
        cout << "A";
    }else if (i == 1){
        cout << "B";
    }else if (i == 2){
        cout << "C";
    }else if (i == 3){
        cout << "D";
    }else if (i == 4){
        cout << "E";
    }
}