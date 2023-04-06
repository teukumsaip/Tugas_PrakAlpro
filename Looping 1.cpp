#include <iostream>
using namespace std;

int main(){
	
	int x,i,sum;
	float rerata;
	
	sum = 0;
	i	= 0;
	
	cout << "untuk memulai, isi nilai x dengan 0 sedangkan -1 untuk mengakhiri \n";
	cout << "ketikkan nilai x :";
	cin >> x;
	
	while (x!=-1) 
	{
		i=i+1;
		sum + sum + x;
		cout  << " ketikkan nilai x" << i << " : ";
		cin  >> x;
	}
	
	if (i !=0)
	{
		rerata = (float)sum/i;
		cout << "rata-rata = " << rerata << endl;
	}
	else 
	{
		cout << "tidak ada data yang dimaksudkan ";
	}
}

