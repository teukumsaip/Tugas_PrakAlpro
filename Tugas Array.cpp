#include <iostream>
using namespace std;

int main(){
		int angka[] = {11, 23, 17, 20, 9, 16, 4, 13, 37, 10};
		int jml_arr = sizeof(angka)/sizeof(*angka);
		
		for (int a = 0;a < jml_arr;a++){
		}
		cout << "============================="<< endl;
		cout << "    Nilai Yang Tersimpan"<< endl;
		cout << "=============================" <<endl;
		for(int b = 0;b < jml_arr;b++){
			cout << "index ke-" << b << " : " << angka [b] << endl;
		}
		cout << "============================="<< endl;
		cout << "         Perubahan"<< endl;
		cout << "=============================" <<endl;
		for(int c = 0;c < jml_arr;c++){
		    if(angka [c]%2==0){
		        cout << " " <<  0 << " ";
		    }
		    else if(angka [c]%2!=0){
		        cout << " " << angka [c] << " ";
		    }
		}
	return 0;
}
