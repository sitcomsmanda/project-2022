#include <iostream>

using namespace std;

// Deklarasi Fungsi Prototype
double kalkulasi_bmr(int berat_badan, int tinggi_badan, int usia, int gender);
double kalkulasi_keaktifan(double bmr);

int main()
{
    // Deklarasi Variabel
    // Variabel untuk tinggi badan
    int tinggi_badan;
    // Variabel untuk berat badan
    int berat_badan;
    // Variabel untuk usia
    int usia;
    // Variabel untuk gender
    int gender;
    // Variabel untuk kalkukasi BMR 
    double bmr;
    // Variabel untuk Hasil Kalkulasi Total Kalori Harian
    double hasil;

    // Output Main Menu
    cout << "[]===============================[]\n";
    cout << "[]== | Program kalkulasi BMR | ==[]\n";
    cout << "[]===============================[]\n";
    cout << endl;

    // Input Berat Badan (dalam kg)
    cout << "[]==| Masukkan Berat Badan Anda (Kg): ";
    cin >> berat_badan;

    // Input Tinggi Badan (dalam cm)
    cout << "[]==| Masukkan Tinggi Badan Anda (Cm): ";
    cin >> tinggi_badan;

    // Input Usia (dalam tahun)
    cout << "[]==| Masukkan Usia Anda (Tahun): ";
    cin >> usia;

    // Input Gender (1: Laki-laki, 2: Perempuan)
    cout << endl;
    cout << "[]======== | INSTRUKSI | ========[]\n";
    cout << "[]=|        1. Laki-laki       |=[]\n";
    cout << "[]=|        2. Perempuan       |=[]\n";
    cout << "[]=============================|=[]\n";

    cout << "Masukkan Gender Anda Sesuai Nomor: ";
    cin >> gender;

    // Mengecek Gender

    // 1 adalah untuk laki-laki
    if (gender == 1)
    {

        // Proses kalkulasi BMR
        bmr = kalkulasi_bmr(berat_badan, tinggi_badan, usia, gender);

        // Proses kalkulasi kebutuhan kalori harian 
        hasil = kalkulasi_keaktifan(bmr);

        // OUTPUT HASIL KALKULASI SEMUANYA
        cout << endl;
        cout << "[]==| HASIL TOTAL KEBUTUHAN KALORI HARIAN |==[]\n";
        cout << "[]==| " << hasil << " kalori." << endl;
        cout << endl;
    }

    // 2 adalah untuk perempuan
    else if (gender == 2)
    {

        // Proses kalkulasi BMR 
        bmr = kalkulasi_bmr(berat_badan, tinggi_badan, usia, gender);

        // Proses kalkulasi kebutuhan kalori harian
        hasil = kalkulasi_keaktifan(bmr);

        // OUTPUT HASIL KALKULASI SEMUANYA 
        cout << endl;
        cout << "[]==| HASIL TOTAL KEBUTUHAN KALORI HARIAN |==[]\n";
        cout << "[]==| " << hasil << " kalori." << endl;
        cout << endl;
    }

    // Peringatan untuk yang selain nomor di atas
    else 
    {
        cout << endl;
        cout << "PERINGATAN! NOMOR YANG ANDA MASUKKAN TIDAK SESUAI INSTRUKSI";
        cout << endl;
    }

    cin.get();
    return 0;
}

double kalkulasi_bmr(int berat_badan, int tinggi_badan, int usia, int gender)
{
    switch (gender)
    {
        case 1: // untuk laki-laki
            return 66 + (13.7 * berat_badan) + (5 * tinggi_badan) - (6.8 * usia);
        case 2: // untuk perempuan 
            return 655 + (9.6 * berat_badan) + (1.8 * tinggi_badan) - (4.7 * usia);
        default: // selain diatas
            return 0;    
    }
}

double kalkulasi_keaktifan(double bmr)
{
    // Variabel untuk Tingkat Keaktifan 
    int keaktifan;

    cout << endl;
    cout << "[]================= | INSTRUKSI | =================[]\n";
    cout << "[]=| 1. Tidak Aktif (pegawai kantoran)           |=[]\n";
    cout << "[]=| 2. Cukup Aktif (olahraga 1-3 hari/minggu)   |=[]\n";
    cout << "[]=| 3. Aktif (olahraga 3-5 hari/minggu)         |=[]\n";
    cout << "[]=| 4. Sangat Aktif (olahraga 6-7 hari/mingu)   |=[]\n";
    cout << "[]=| 5. Ekstra Aktif (latihan keras)             |=[]\n";
    cout << "[]===============================================|=[]\n";
    cout << endl;

    // Input Keaktifan
    cout << "[]=| Masukkan Tingkat Keaktifan Anda Sesuai Nomor: ";
    cin >> keaktifan;

    if (keaktifan == 1)
    {
        return bmr * 1.2;
    }
    else if (keaktifan == 2)
    {
        return bmr * 1.375;
    }
    else if (keaktifan == 3)
    {
        return bmr * 1.55;
    }
    else if (keaktifan == 4)
    {
        return bmr * 1.725;
    }
    else if (keaktifan == 5)
    {
        return bmr * 1.9;
    }
    else
    {
        cout << endl;
        cout << "PERINGATAN! NOMOR YANG ANDA MASUKKAN TIDAK SESUAI INSTRUKSI";
        cout << endl;
    }

    return 0;
}