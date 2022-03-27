#include <iostream>
using namespace std;

double kal_bmr(int berat_badan, int tinggi_badan, int usia, int gender);
double kal_keakt(double bmr);

int main()
{
	int tinggi_badan;
	int berat_badan;
	int usia;
	int gender;
	double bmr;
	double hasil;

	cout << " Masukan berat badan (kg): ";
	cin >> berat_badan;
	cout << endl;

	cout << " Masukan tinggi badan (cm): ";
	cin >> tinggi_badan;
	cout << endl;

	cout << " Masukan umur anda: ";
	cin >> usia;
	cout << endl;

	cout << "1.laki laki";
	cout << "2.perempuan";
	cout << endl;
	cout << "gender mu?";
	cin >> gender;

	if (gender == 1 ){
		bmr = kal_bmr(berat_badan, tinggi_badan, usia, gender);
		hasil = kal_keakt(bmr);

		cout << endl;
		cout << "kebutuhan kalori harian";
		cout << "~" << hasil << "kalori anda" << endl;
	}

	else if(gender ==2){
		bmr = kal_bmr(berat_badan, tinggi_badan, usia, gender);
		hasil = kal_keakt(bmr);
		
		cout << endl;
		cout << "kebutuhan kalori harian";
		cout << "~" << hasil << "kalori anda" << endl;

	}

	else{
		cout << endl;
		cout << "Yang bener saya lelah, salah 3 kali skrg saya copas aja capekkkk...\n";

	}

	cin.get();
	return 0;	

}

double kal_bmr(int berat_badan, int tinggi_badan, int usia, int gender){
	switch (gender)
	{
	case 1:
		return 66 + (13.7 * berat_badan) + (5 * tinggi_badan) - (6.8 * usia);
	case 2:
		return 655 + (9.6 * berat_badan) + (1.8 * tinggi_badan) - (4.7 * usia);
	default:
		return 0;
	}
}

double kal_keakt(double bmr){
	int keakt;

	cout << endl;
	cout << "--- 1. Tidak aktif (nolep) ---\n";
	cout << "--- 2. cukup aktif (olga 1-3 hari/minggu)---\n";
	cout << "--- 3. aktif (olga 3-5 hari/minggu)---\n";
	cout << "--- 4. sangat aktif (olga 6-7 hari/minggu)---\n";	
	cout << "--- 5. Terlalu aktif (Latihan keras, alpha male)---\n";
	
	cout << "Mana yang lebih cocok dengan anda? ";
	cin >> keakt;

	if (keakt == 1)
	{
		return bmr * 1.2;
	}
	else if (keakt == 2)
	{
		return bmr * 1.375;
	}
	else if (keakt == 3)
	{
		return bmr * 1.55;
	}
	else if (keakt == 4)
	{
		return bmr * 1.725;
	}
	else if (keakt == 5)
	{
		return bmr * 1.9;
	}
	else
	{
		cout << endl;
		cout << "yang sesua plis...\n";
	}
		return 0;
	
}