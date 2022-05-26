#include <iostream>
using namespace std;

struct mahasiswa{
    int id;
    string nama; 
    string umur;
    string vaksin;
};

int main(){
    mahasiswa mahasiswa[] = {
    {
        1,
        "Ujang",
        "17",
        "3"
    },
    {
        2, 
        "Ucup",
        "18",
        "3"
    },
    {
        3, 
        "Dinda",
        "18",
        "3"
    },
    {
        4, 
        "Ahmad",
        "17",
        "2"
    },
    {
        5, 
        "Boyen",
        "18",
        "3"
    }
};

int idMahasiswaYangHarusDikeluarkan = 4;
mahasiswa[1].nama =  "Ucup Kamarullah";

for (int i = 0; i < 5; i++) {
    if (mahasiswa[i].id == idMahasiswaYangHarusDikeluarkan) {
        cout << "Mahasiswa " << mahasiswa[i].nama << "tidak melakukan vaksin Booster \n";
        
        break;
    }
    
    cout << "Mahasiswa " << mahasiswa[i].nama << "telah melakukan vaksin sebanyak" << mahasiswa[i].vaksin << " kali" << "\n";
}
}
