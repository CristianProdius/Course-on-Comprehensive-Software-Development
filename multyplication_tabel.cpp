#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int tabelSize;
    cin>>tabelSize;
    int **multTabel = new int*[tabelSize];

    for(int i=0; i<tabelSize; i++){
        multTabel[i] = new int[tabelSize];
    }

    for(int r=0; r<tabelSize; r++){
        for(int c=0; c<tabelSize; c++){
            multTabel[r][c] = r*c;
        }
    }
    for(int r=0; r<tabelSize; r++){
        for(int c=0; c<tabelSize; c++){
            cout<<setw(3)<< multTabel[r][c]<<" ";
        }
        cout<<endl;
    }

}