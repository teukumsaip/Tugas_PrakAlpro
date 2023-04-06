#include <iostream>
using namespace std;
int main(){
	int f, hasil=1;
	cout << "masukkan bilangan faktorial : ";
	cin  >> f;
		
	
	for(int i = 1; i<= f;	i+=1)
	{
		hasil*=i;
	}
	cout << "hasil dari " << f << "! = " << hasil;
 }
