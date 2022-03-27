#include <iostream>
using namespace std;
int main()              // fungsi kembalian
{
 
 float b;
 float t;               // variabel
 float BMI;

 cout<<"Masukan berat (dalam kilogram) : "; // input berat badan
 cin>>b;

 cout<<"Masukan tinggi (dalam meter) : "; // input tinggi badan
 cin>>t;

 BMI = (b) / (t * t);                   // kalkulasi BMI
 cout<<"\nHasil BMI-mu adalah: "<<BMI;  // hasil kalkulasi BMI

 if (BMI < 15.99)                       // penentuan kategori BMI
 {
 cout<<" (Sangat Kurus).\n";
 }
 if (BMI >= 16 && BMI<= 16.99)
 {
 cout<<" (Kurus).\n";
 }
 if (BMI >= 17 && BMI<= 18.49)
 {
 cout<<" (Agak Kurus).\n";
 }
 if (BMI >= 18.5 && BMI <= 24.99)
 {
 cout<<" (Berat Badan Normal).\n";
 }
 if (BMI >= 25 && BMI <=29.99)
 {
 cout<<" (Pre-obesitas).\n";
 }
 if (BMI >= 30 && BMI <= 34.99 )
 {
 cout<<" (Obesitas kelas I).\n";
 } 
 if (BMI >= 35 && BMI <= 39.99 )
 {
 cout<<" (Obesitas kelas II).\n";
 } 
 if (BMI >= 40 )
 {
 cout<<" (Obesitas kelas III).\n";
 } 

 cout<<"\n\tIndeks Massa Tubuh\n";        // kategori BMI
 cout<<"Berat Badan Kurang:     Kurang dari 18.5\n";
 cout<<"Berat Badan Normal:     Di antara 18.5 sampai 24.9\n";
 cout<<"Berat Badan Berlebih:   Di antara 25 sampai 29.9\n";
 cout<<"Obesitas:               30 atau lebih";
 
 return 0; // penutup fungsi kembalian
}
