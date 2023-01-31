#include <iostream>
using namespace std;

int main(){
    int size;
    cout<<"enter the size of array: ";
    cin>> size;

    int *myArray = new int[size];

    for(int i=0; i<size; i++){
        cout<<"Enter a number: ";
        cin>> myArray[i];
    }

    cout<<"Yoar array is: ";
    for(int i=0; i<size; i++){
        cout<< myArray[i]<<" ";
    }

    delete [] myArray;
}