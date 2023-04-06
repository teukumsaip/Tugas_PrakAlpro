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
 
        do{
            cout << "* ";
            ++b;
        }while(b != 2*a-1);
        cout << endl;
    }    
    return 0;
}
