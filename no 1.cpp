#include <iostream>
using namespace std;

int main()
{
	int banyakdata, angka, total, i;
	float ratarata;
	total	= 0;
	i 		= 1;
	cout	<< "Banyak Data = ";
	cin		>> banyakdata;
	while (i<=banyakdata)
	{
			cout << "Masukkan Angka = ";
			cin  >> angka;
			total = total+angka;
			i++;
	}
	ratarata = total/banyakdata;
	cout << "Rata-rata = " << ratarata << endl;
}
