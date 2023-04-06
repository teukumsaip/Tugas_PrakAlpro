//SOURCE CODE
#include <iostream>
using namespace std;
int main()
{
int pilih;
string ulang;
    do{
    cout << "Program Menu " << endl;
    cout << "===========================" << endl;
    cout << "Pilih Menu :" << endl;
    cout << "1. Square Printing" << endl;
    cout << "2. Factorial Number" << endl;
    cout << "3. Prime Number\n" << endl;
    cout << "===========================" << endl;
    cout << "Silahkan Pilih menu yang anda inginkan : ";
    cin >> pilih;
    switch (pilih)
    {
    case 1:
            int width, row, col; 
            cout << "Square Printing " << endl;
            cout << "Masukkan jumlah kolom: ";
            cin  >> col;
            cout << "Masukkan jumlah baris: ";
            cin  >> row;
            for(int height=1;height<=col;height++)
            {
                for(int width=1;width<=row;width++)
                {
                cout << "*" ;
            }
            cout << endl;

            }
            break;
    case 2:
            int f;
	cout << "Factorial Number " << endl;
    cout << "Masukkan Bilangan : ";
    cin  >> f;
            for (int number=1;number<=f;number++)
            {
                long factorial = 1;
                for(int count=1;count<=number;count++)
                {
                    factorial *= count;
                }
                cout << "Number " << number;
                cout << " Factorial is " << factorial << endl ;
            }
            break;
    case 3:
            cout <<"Prime Number" << endl;
            int i=0,cek, a, awal, akhir;
            cout <<"masukan bilangan awal : ";
            cin>>awal; 
            cout <<"Masukan bilangan akhir : ";
            cin>>akhir;
            int hasil[akhir];
            a=awal; 
                do{
                    cek=0;
                    for(int j=2;j<=a;j++){
                        if(a%j==0){
                                cek++; 
                        }
                    }
                    if(cek==1){
                        hasil[i]=a;
                        i++;
                    }
                    a++;
                }while(a<=akhir);
                for(int j=0;j<i;j++){
                    cout<<hasil[j];
                          if(j < i-1){ 
                                cout<<", ";
                          }else{
                                cout<<'.';
                          }
                }
    }
    cout << "\nPilih kembali menu anda (y/n) ? : " ;
    cin >> ulang;
    }while( ulang == "y");
    cout << "\nprogram selesai" << endl;
    return 0;
}
