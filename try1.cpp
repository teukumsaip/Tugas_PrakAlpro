#include <iostream>
using namespace std;

void HitungHarga (int hargasatuan, int jumlahbeli, int diskon){
	int totalharga = hargasatuan * jumlahbeli;
	int totaldiskon = totalharga * diskon / 100;
	int totalbayar = totalharga - totaldiskon;
	
	cout << "Jadi harga yang harus dibayar adalah Rp." << totalbayar << endl; 
}

int main (){
	HitungHarga(5000, 3, 20);
	HitungHarga(7000, 4, 10);
	HitungHarga(4000, 2, 13);
	return 0;
}
