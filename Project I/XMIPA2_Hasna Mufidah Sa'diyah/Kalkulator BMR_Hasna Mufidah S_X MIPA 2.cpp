#include <iostream>

using namespace std;

int main () {
    //! Inisialisasi Variabel
    // Variabel untuk Tinggi Badan
    int tinggi_badan; 
    // Variabel untuk Berat Badan
    int berat_badan;
    // Variabel untuk Usia;
    int usia;
    // Variabel untuk Gender 
    int gender;
    // Variabel untuk Tingkat Keaktifan 
    int aktivitas ;
    // Variabel untuk Hasil Kalkulasi BMR 
    float bmr;
    // Variabel untuk Hasil Kalkulasi Total Kebutuhan Kalori
    float hasil;

    
     //! Output Main Menu 
     cout << "[]=============================[]\n";
     cout << "[]==| Program Kalkulasi BMR |==[]\n";
     cout << "[]=============================[]\n";
     cout << endl;

    // Input Berat Badan (dalam kg)
    cout << "[]==| Masukan Berat Badan (kg): ";
    cin >> berat_badan;

    // Input Tinggi Badan (dalam cm)
    cout << "[]==| Masukan Tinggi Badan (cm): ";
    cin >> tinggi_badan;

    // Input Usia (dalam tahun)
    cout << "[]==| Masukan Usia Anda (Tahun): ";
    cin >> usia;

    cout << endl;
    cout << "[]========| INSTRUKSI |========[]\n";
    cout << "[]=| 1. Laki-Laki            |=[]\n";
    cout << "[]=| 2. Perempuan            |=[]\n";
    cout << "[]=============================[]\n";
    cout << endl;

    // Input Gender (1: Laki-Laki, 2: Perempuan)
    cout << "[]=| Masukan Gender Anda Sesuai Nomer: ";
    cin >> gender;

    // Mengecek Gender
    // 1 adalah untuk Laki-Laki
    if ( gender == 1 ){

        // Proses Kalkulasi BMR
        bmr = 66 + (13.7 * berat_badan) + (5 * tinggi_badan) - (6.8 * Usia);

        //! INSTRUKSI TINGKAT AKTIVITAS 
        cout << endl;
        cout << "[]=====================| INSTRUKSI |=====================[]\n";
        cout << "[]==| 1. Tidak Aktif (pegawai kantoran)                |=[]\n";
        cout << "[]==| 2. Cukup Aktif (olahraga 1-3 hari/minggu)        |=[]\n";
        cout << "[]==| 3. Aktif (olahraga 3-5 hari/minggu)              |=[]\n";
        cout << "[]==| 4. Sangat Aktif (olahraga 6-7 hari/minggu)       |=[]\n";
        cout << "[]==| 5. Extra Aktif (latihan keras)                   |=[]\n";
        cout << "[]=======================================================[]\n";
        cout << endl;

        //! Input Keaktifan 
        cout << "[]=| Masukan Tingkat Keaktifan Anda Sesuai Nomer: ";
        cin >> keaktifan;

        //! Proses Kalkulasi Kebutuhan Kalori Harian
        if ( keaktifan == 1 ){
            hasil = bmr * 1.2;
        } else if ( keaktifan == 2 ){
            hasil = bmr * 1.375;
        } else if ( keaktifan == 3 ){
            hasil = bmr * 1.55;
        } else if ( keaktifan == 4 ){
            hasil = bmr * 1.725;
        } else if ( keaktifan == 5 ){
            hasil = bmr * 1,9;
        }  

        //! OUTPUT HASIL KALKULASI SEMUANYA     
        cout << endl; 
        cout << "[]====| HASIL TOTAL KEBUTUHAN KALORI HARIAN |====[]\n";
        cout << "[]====| " << hasil << " kalori." << endl;
        cout << endl;

    }
    //2 adalah untuk perempuan
    else if ( gender == 2 ){

       // Proses Kalkulasi BMR
        bmr = 665 + (9.6 * berat_badan) + (1.8 * tinggi_badan) - (4.7 * usia);

        //! INSTRUKSI TINGKAT AKTIVITAS 
        cout << endl;
        cout << "[]=====================| INSTRUKSI |=====================[]\n";
        cout << "[]==| 1. Tidak Aktif (pegawai kantoran)                |=[]\n";
        cout << "[]==| 2. Cukup Aktif (olahraga 1-3 hari/minggu)        |=[]\n";
        cout << "[]==| 3. Aktif (olahraga 3-5 hari/minggu)              |=[]\n";
        cout << "[]==| 4. Sangat Aktif (olahraga 6-7 hari/minggu)       |=[]\n";
        cout << "[]==| 5. Extra Aktif (latihan keras)                   |=[]\n";
        cout << "[]=======================================================[]\n";
        cout << endl;

        //! Input Keaktifan 
        cout << "[]=| Masukan Tingkat Keaktifan Anda Sesuai Nomer: ";
        cin >> keaktifan;

        //! Proses Kalkulasi Kebutuhan Kalori Harian
        if ( keaktifan == 1 ){
            hasil = bmr * 1.2;
        } else if ( keaktifan == 2 ){
            hasil = bmr * 1.375;
        } else if ( keaktifan == 3 ){
            hasil = bmr * 1.55;
        } else if ( keaktifan == 4 ){
            hasil = bmr * 1.725;
        } else if ( keaktifan == 5 ){
            hasil = bmr * 1,9;
        }

        //! OUTPUT HASIL KALKULASI SEMUANYA     
        cout << endl; 
        cout << "[]====| HASIL KEBUTUHAN KALORI HARIAN |====[]\n";
        cout << "[]==| " << hasil << " kalori." << endl;
        cout << endl;

    }
    //! Peringatan untuk yang selain nomor diatas
    else {
        cout << endl;
        cout << "PERINGATAN: NOMER YANG ANDA MASUKAN TIDAK SESUAI INSTRUKSI!\n";
        cout << endl;
    }

    cin.get();
    return 0;
}