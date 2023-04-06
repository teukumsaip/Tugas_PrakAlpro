#include<iostream>
using namespace std;
int main(){
 
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

