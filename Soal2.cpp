#include <iostream>
using namespace std;

int main(){
    int input, height, row, chg1, chg2;

    cin>>input;
    cin>>height>>row;

    int **array = new int*[row];
for(int i = 0; i < row; ++i) {
    array[i] = new int[height];
}

    for(int i=0;i<row;i++){
        for(int j=0;j<height;j++){
            cin>>array[i][j];
        }
    }

    cin>>chg1>>chg2;

int **temparray = new int*[2];
for(int i = 0; i < 2; ++i) {
    temparray[i] = new int[height];
}

chg1-=1;
chg2-=1;

        for(int j=0;j<height;j++){
            temparray[chg1][j]=array[chg1][j];
        }
        for(int j=0;j<height;j++){
            array[chg1][j]=array[chg2][j];
        }
        for(int j=0;j<height;j++){
            array[chg2][j]=temparray[chg1][j];
        }


        for(int i=0;i<row;i++){
            for(int j=0;j<height;j++){
                cout<<array[i][j];
            }
            cout<<endl;
        }
}
