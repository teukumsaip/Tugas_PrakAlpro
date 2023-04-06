#include <iostream>
using namespace std;
int main(){
	int f, hasil=1;
	cout << "masukkan bilangan faktorial : ";
	cin  >> f;
		
	int i = 1;
	while(i<= f){
		hasil*=i;
		i+=1;
	}
	cout << "hasil dari " << f << "! = " << hasil;
 }
