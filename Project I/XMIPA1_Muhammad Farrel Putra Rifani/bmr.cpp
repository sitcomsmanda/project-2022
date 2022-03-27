#include <iostream>

using namespace std;

int main() {

    int tinggi_badan;
    int berat_badan;
    int usia;
    int gender;
    int keaktifan;

    float bmr;
    float hasil;

    cout << endl;
    cout << "[]=============================[]\n";
    cout << "[]==| Program Kalkulasi BMR |==[]\n";
    cout << "[]=============================[]\n";
    cout << endl;

    cout << "[]==| Masukkan Berat Badan (Kg): ";
    cin >> berat_badan;
    
    cout << "[]==| Masukkan Tinggi Badan (Cm): ";
    cin >> tinggi_badan;

    cout << "[]==| Masukkan Usia Anda (Tahun): ";
    cin >> usia;

    cout << endl;

    cout << "[]========| INSTRUKSI |========[]\n";
    cout << "[]=| 1. Laki - Laki          |=[]\n";
    cout << "[]=| 2. Perempuan            |=[]\n";
    cout << "[]=============================[]\n";

    cout << "[]=| Masukkan gender Anda Sesuai Nomor: ";
    cin >> gender;
    cout << endl;

    if ( gender == 1 ){
        
        bmr = 66 + (13.7 * berat_badan) + (5 * tinggi_badan) - (6.8 * usia);
        
        cout << "[]======================| INSTRUKSI |======================[]\n";
        cout << "[]=| 1. Tidak Aktif (Pegawai Kantoran)                   |=[]\n";
        cout << "[]=| 2. Cukup Aktif (Olahraga 1-3 Hari/Minggu)           |=[]\n";
        cout << "[]=| 3. Aktif (Olahraga 3-5 Hari/Minggu)                 |=[]\n";
        cout << "[]=| 4. Sangat Aktif (Olahraga 6-7 Hari/Minggu)          |=[]\n";
        cout << "[]=| 5. Extra Aktif (Latihan Keras)                      |=[]\n";
        cout << "[]=========================================================[]\n";
        
        cout << "[]=| Masukkan Tingkat Keaktifan Anda Sesuai Nomor: ";
        cin >> keaktifan;

        if ( keaktifan == 1 ){
            hasil = bmr * 1.2;
        } else if ( keaktifan == 2 ){
            hasil = bmr * 1.375;
        } else if ( keaktifan == 3 ){
            hasil = bmr * 1.55;
        } else if ( keaktifan == 4 ){
            hasil = bmr * 1.725;
        } else if ( keaktifan == 5){
            hasil = bmr * 1.9;
        }

        cout << endl;
        cout << "[]====| Hasil Total Kebutuhan Kalori Harian |====[]\n";
        cout << "[]====| " << hasil << " Kalori." << endl;
        cout << endl;

    } else if ( gender == 2) {

        bmr = 655 + (9.6 * berat_badan) + (1.8 * tinggi_badan) - (4.7 * usia);
        
        cout << "[]======================| INSTRUKSI |======================[]\n";
        cout << "[]=| 1. Tidak Aktif (Pegawai Kantoran)                   |=[]\n";
        cout << "[]=| 2. Cukup Aktif (Olahraga 1-3 Hari/Minggu)           |=[]\n";
        cout << "[]=| 3. Aktif (Olahraga 3-5 Hari/Minggu)                 |=[]\n";
        cout << "[]=| 4. Sangat Aktif (Olahraga 6-7 Hari/Minggu)          |=[]\n";
        cout << "[]=| 5. Extra Aktif (Latihan Keras)                      |=[]\n";
        cout << "[]=========================================================[]\n";
        
        cout << "[]=| Masukkan Tingkat Keaktifan Anda Sesuai Nomor: ";
        cin >> keaktifan;

        if ( keaktifan == 1 ){
            hasil = bmr * 1.2;
        } else if ( keaktifan == 2 ){
            hasil = bmr * 1.375;
        } else if ( keaktifan == 3 ){
            hasil = bmr * 1.55;
        } else if ( keaktifan == 4 ){
            hasil = bmr * 1.725;
        } else if ( keaktifan == 5){
            hasil = bmr * 1.9;
        }

        cout << endl;
        cout << "[]====| Hasil Total Kebutuhan Kalori Harian |====[]\n";
        cout << "[]====| " << hasil << " Kalori." << endl;
        cout << endl;

    } else {
        cout << "Masukkan Nomor Sesuai Yang ada Diinstruksi!\n";
        cout << endl;
    }

    return 0;
}