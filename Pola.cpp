#include <iostream>
using namespace std;
 
int main()
{
    int spasi, baris;
 
    cout <<"masukkan jumlah baris: ";
    cin >> baris;
 
    for(int a = 1, b = 0; a <= baris; ++a, b = 0)
    {
        for(spasi = 1; spasi <= baris-a; ++spasi)
        {
            cout <<"  ";
        }
 
        while(b != 2*a-1){
            cout << "* ";
            ++b;
        }
        cout << endl;
    }    
    return 0;
}
