#include <iostream>
using namespace std;

void NilaiDiTranskript (int NilaiAkhir){
	
	string nilaiTranskript = "E";
    if(NilaiAkhir >= 75) {
        nilaiTranskript = "A";
    } else if(NilaiAkhir > 64) {
        nilaiTranskript = "B";
    } else if(NilaiAkhir > 50) {
        nilaiTranskript = "C";
    } else if(NilaiAkhir > 30) {
        nilaiTranskript = "D";
    }
    cout << "Diketahui nilai akhirnya " << NilaiAkhir << " jadi nilai transkriptnya " << NilaiDiTranskript;
}	  
 int main(){
 	NilaiDiTranskript (64);
 	
 	return 0;
 }

