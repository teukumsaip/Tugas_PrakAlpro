 #include <iostream>
using namespace std;

int main()
{
	int banyakdata, i;
	float ratarata, total, angka;
	total	= 0;
	i 		= 1;
	cout	<< "Banyak Data = ";
	cin		>> banyakdata;
	for (int i = 1; i<=banyakdata; i++)
	{
			cout << "Masukkan Angka = ";
			cin  >> angka;
			total = total+angka;
	}
	ratarata = total/banyakdata;
	cout << "Rata-rata = " << ratarata << endl;
}
