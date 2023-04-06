#include <iostream>
using namespace std;

int main(){

    int baris, kolom, t1, t2;
    char data[25][25];
    
    cout<<"masukkan baris : "<< endl;  
    cin>>baris;
    cout<<"masukkan kolom : "<< endl;
    cin>>kolom;
    cout<<"masukkan t1 :  "<< endl;
    cin>>t1;
    cout<<"masukkan t2 : "<< endl;
    cin>>t2;

    for(int i=1;i<baris+1;i++){
        for(int j=1;j<kolom+1;j++){
            if((((i+j)%t1)==1)&&(((i+j)%t2)==1)){
                data[i-1][j-1]= 'A';
            }else{
                data[i-1][j-1]= 'M';
            }
        }
    }

    for(int i=0;i<baris;i++){
        for(int j=0;j<kolom;j++){
            cout<<data[i][j];
        }
        cout<<endl;
    }

    return 0;
}

