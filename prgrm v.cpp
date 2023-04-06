/* Program untuk menampilkan komentar
 'Lulus' jika nilai >=60,
 dan komentar 'selesai'
 */
#include <iostream>
#include <conio.h>
using namespace std;

main()
{
 int vnilai; // menyimpan nilai
 // masukkan nilai melalui keyboar ke var vnilai
 cout<<"Masukkan Nilai anda : "<<endl; cin>>vnilai;

 //Cek apakah isi vnilai >> 60
 //JIka ya, tampilkan komentar 'Lulus'
 //Jika tidak, (tidak melakukan apa-apa) langsung ke komentar 'selesai'

if (vnilai>=60)
// {
// cout<<" nilai Anda : "<<vnilai<<endl;
 cout<<" Selamat Anda Lulus "<<endl;
// }
 cout<<"selesai";
 getch();
}
