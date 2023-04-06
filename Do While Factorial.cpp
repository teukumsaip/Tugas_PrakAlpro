#include <iostream>
using namespace std;

int main()
{
	int f, hasil=1;
	cout << "masukkan bilangan faktorial : ";
	cin >> f;
		
	int i=1;
	do{
		hasil&=i;
		i+=1;
	}while (i<=f);
	cout << "hasil dari " << f << "! = " << hasil;
 }
