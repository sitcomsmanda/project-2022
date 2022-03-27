#include <iostream>
using namespace std;

int main () {

// inisialisasi variabel

int tinggi_badan;

int berat_badan;

int usia;

int gender;

float bmr;

int keaktifan;

float hasil;

// output main menu
cout << "[]=============================[]\n";
cout << "[]====Program Kalkulasi BMR====[]\n";
cout << "[]=============================[]\n";

// input berat badan (dalam kg)
cout << "[]==| Masukkan Berat Badan (kg): ";
cin >> berat_badan;

// input tinggi badan (dalam cm)
cout << "[]==| Masukkan Tinggi Badan (cm): ";
cin >> tinggi_badan;

// input usia (tahun)
cout << "[]==| Masukkan Usia (tahun): ";
cin >> usia;

// input gender (1 : laki laki, 2 perempuan)
cout << "INSTRUKSI! Masukkan angka 1 (satu) jika anda laki laki. Masukkan angka 2 (dua) jika anda perempuan" << endl;
cout << "Masukkan gender sesuai instruksi: ";
cin >> gender;

// mengecek gender

// 1 adalah laki
if (gender == 1){
bmr = 66 + (13.7 * berat_badan) + (5 * tinggi_badan) - (6.8 * usia);

cout << "[]===============INSTRUKSI===============[]"<< endl;
cout << "1) Tidak Aktif (pegawai kantoran)"<< endl;
cout << "2) Cukup Aktif (olahraga 1-3 hari/minggu)" << endl;
cout << "3) Aktif (olahraga 3-5 hari/minggu)" << endl;
cout << "4) Sangat Aktif (olahraga 6-7 hari/minggu)" << endl;
cout << "5) Extra Aktif (latihan keras)" << endl;
cout << "[]========================================[]" << endl;
cout << endl;

cout << "Masukkan tingkat keaktifan berdasarkan instruksi: " ;
cin >> keaktifan;

if (keaktifan == 1){
    hasil = bmr * 1.2;
} else if (keaktifan == 2){
    hasil = bmr * 1.375;
} else if (keaktifan == 3) {
    hasil = bmr * 1.55;
} else if (keaktifan == 4){
    hasil = bmr * 1.725;
} else if (keaktifan == 5){
    hasil = bmr * 1.9;
}
cout << endl;
cout << "[]===HASIL TOTAL KEBUTUHAN HARIAN===[]" << endl;
cout << "[]===" << hasil << "kalori" << endl;

}


// 2 adalah perempuan
else if (gender == 2){
bmr = 655 + (9.6 * berat_badan) + (1.8 * tinggi_badan) - (4.7 * usia);

cout << "[]===============INSTRUKSI===============[]"<< endl;
cout << "1) Tidak Aktif (pegawai kantoran)"<< endl;
cout << "2) Cukup Aktif (olahraga 1-3 hari/minggu)" << endl;
cout << "3) Aktif (olahraga 3-5 hari/minggu)" << endl;
cout << "4) Sangat Aktif (olahraga 6-7 hari/minggu)" << endl;
cout << "5) Extra Aktif (latihan keras)" << endl;
cout << "[]========================================[]" << endl;
cout << endl;

cout << "Masukkan tingkat keaktifan berdasarkan instruksi: " ;
cin >> keaktifan;

if (keaktifan == 1){
    hasil = bmr * 1.2;
} else if (keaktifan == 2){
    hasil = bmr * 1.375;
} else if (keaktifan == 3) {
    hasil = bmr * 1.55;
} else if (keaktifan == 4){
    hasil = bmr * 1.725;
} else if (keaktifan == 5){
    hasil = bmr * 1.9;
}
cout << endl;
cout << "[]===HASIL TOTAL KEBUTUHAN HARIAN===[]" << endl;
cout << "[]===" << hasil << " kalori===[]" << endl;

}

    cin.get ();
    return 0;
}
