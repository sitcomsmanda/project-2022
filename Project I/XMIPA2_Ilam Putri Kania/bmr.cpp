#include <iostream>
using namespace std;

void male_function (); 
void female_function (); 

int main()
{   
    
    int laki = 1;
    int cewek = 2;
    int gender;

    cout << "Gender mu apa? (1 untuk laki, 2 untuk cewek)" << endl;
    cin >> gender;

    //if else nya

    
    int tinggi2;

    while (gender <=0 || gender >= 3) 
      if (gender == 1){
        cout << "Laki, berat mu berapa?";  
        void male_function (); 
    
    }   
        else if (gender == 2){
        cout << "Cewek, berat mu berapa?" << endl;
        void female_function (); 
        cin >> tinggi2;
    }   
        else {
        cout << "disuruh nya laki atau cewek, gimana sih!?!?!?" << endl;
         }

 //LAKI LAKI DARI TINGGI, BERAT UMUR
void male_function ();{

// TINGGI (LAKI LAKI)
cout << "tinggi mu dalam cm? "; 
int tinggi;
cin >> tinggi;

    while (tinggi < 127 || tinggi > 228 )
    {
        cout << "\n\n"; 
                       cout << "harus lebih tinggi dari 127cm" << endl; 
                       cout << "cantumkan tinggi di antara 127cm dan 228cm" << endl; 
                       cin >> tinggi; 
 
    }

// BERAT (LAKI LAKI)
    cout << "\n\n"; 
cout << "Berat badan mu dalam kg? "; 
int berat; 
cin >> berat; 
 
while (berat < 30 || berat > 450) 
{ 
cout << "\n\n"; 
cout << "cantumkan berat badan mu di antara 30 sampai 450" << endl; 
cin >> berat; 
}


// UMUR (LAKI LAKI)
    cout << "Umur mu berapa? ";
int umur; 
cin >> umur; 
 
while (umur < 10 || umur > 80) 
      { 
           cout << "\n\n"; 
           cout << "Cantumkan umur di antara 10 sampai 80" << endl; 
           cin >> umur; 
           } 
 
      
    

    // PERHITUNGAN
    double bmr; 
    bmr = 66 + (13.7 * berat) + (5 * tinggi) - (6.8 * umur); 

cout << "\n\n"; 
cout << "Pernahkah anda olahraga?: " << endl; 
cout << "\n" << endl; 
cout << "1. Sedikit ke tidak olahraga sama sekali " << endl; 
cout << "2. Olahraga ringan (1-3 hari per minggu) " << endl; 
cout << "3. Olahraga sedang ( 3-5 hari per minggu) " << endl; 
cout << "4. olahraga berat ( 6-7 hari per minggu) " << endl; 
cout << "5. olahraga sangat berat (2 kali sehari, latihan berat tambahan) " << endl; 
cout << "\n\n" << "Pilih angka sesuai diatas: " ; 

    int selection; 
cin >> selection; 
 
if (selection == 1) 
{ 
         bmr = bmr * 1.2; 
           cout << "\n\n"; 
           cout << "Your BMR is: " << bmr << endl; 
           cout << "nolep, gak aktif" << endl;
} 
 
if (selection == 2) 
{ 
         bmr = bmr * 1.375; 
           cout << "\n\n"; 
           cout << "Your BMR is: " << bmr << endl; 
           cout << "cukup aktif ya bun" << endl;
} 
 
if (selection == 3) 
{ 
         bmr = bmr * 1.55; 
           cout << "\n\n"; 
           cout << "Your BMR is: " << bmr << endl; 
           cout << "aktif..." << endl;
} 
 
if (selection == 4) 
{ 
         bmr = bmr * 1.725; 
           cout << "\n\n"; 
           cout << "Your BMR is: " << bmr << endl; 
           cout << "sangat aktif wow" << endl;
} 
 
if (selection == 5) 
{ 
         bmr = bmr * 1.9; 
           cout << "\n\n"; 
           cout << "Your BMR is: " << bmr << endl; 
           cout << "Keaktifan lol" << endl;
}          system ("pause"); 

}


// YANG CEWEK

  void female_function ();{
    // TINGGI (CEWEK)
cout << "tinggi mu dalam cm? "; 
int tinggi2;
cin >> tinggi2;

    while (tinggi2 < 127 || tinggi2 > 228 )
    {
        cout << "\n\n"; 
                       cout << "harus lebih tinggi dari 127cm" << endl; 
                       cout << "cantumkan tinggi di antara 127cm dan 228cm" << endl; 
                       cin >> tinggi2; 
 
    }

// BERAT (CEWEK)
    cout << "\n\n"; 
cout << "Berat badan mu dalam kg? "; 
int berat; 
cin >> berat; 
 
while (berat < 30 || berat > 450) 
{ 
cout << "\n\n"; 
cout << "cantumkan berat badan mu di antara 30 sampai 450" << endl; 
cin >> berat; 
}


// UMUR (CEWEK)
    cout << "Umur mu berapa? ";
int umur; 
cin >> umur; 
 
while (umur < 10 || umur > 80) 
      { 
           cout << "\n\n"; 
           cout << "Cantumkan umur di antara 10 sampai 80" << endl; 
           cin >> umur; 
           } 
 
      


    // PERHITUNGAN
    double bmr; 
    bmr = 665 + (9.6 * berat) + (1.8 * tinggi2) - (4.7 * umur); 

  cout << "\n\n"; 
cout << "Pernahkah anda olahraga?; " << endl; 
cout << "\n" << endl; 
cout << "1. Sedikit ke tidak olahraga sama sekali " << endl; 
cout << "2. Olahraga ringan (1-3 hari per minggu) " << endl; 
cout << "3. Olahraga sedang ( 3-5 hari per minggu) " << endl; 
cout << "4. olahraga berat ( 6-7 hari per minggu) " << endl; 
cout << "5. olahraga sangat berat (2 kali sehari, latihan berat tambahan) " << endl; 
cout << "\n\n" << "Pilih angka sesuai diatas: " ; 

    int selection; 
cin >> selection; 
 
if (selection == 1) 
{ 
         bmr = bmr * 1.2; 
           cout << "\n\n"; 
           cout << "Your BMR is: " << bmr << endl; 
           cout << "nolep, gak aktif" << endl;
} 
 
if (selection == 2) 
{ 
         bmr = bmr * 1.375; 
           cout << "\n\n"; 
           cout << "Your BMR is: " << bmr << endl; 
           cout << "cukup aktif ya bun" << endl;
} 
 
if (selection == 3) 
{ 
         bmr = bmr * 1.55; 
           cout << "\n\n"; 
           cout << "Your BMR is: " << bmr << endl; 
           cout << "aktif..." << endl;
} 
 
if (selection == 4) 
{ 
         bmr = bmr * 1.725; 
           cout << "\n\n"; 
           cout << "Your BMR is: " << bmr << endl; 
           cout << "sangat aktif wow" << endl;
} 
 
if (selection == 5) 
{ 
         bmr = bmr * 1.9; 
           cout << "\n\n"; 
           cout << "Your BMR is: " << bmr << endl; 
           cout << "Keaktifan lol" << endl;
}          system ("pause"); 
  }

   cin.get();
   return 0;
}