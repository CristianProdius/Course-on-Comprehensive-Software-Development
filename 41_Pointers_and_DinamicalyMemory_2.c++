#include <iostream>
using namespace std;

void myFunction(int *pointerVar){
    *pointerVar = 20;
}

int main(){
    int *pointer;
    int *dinamic_pointer = new int;
    int myInt = 8;
    cout<<myInt<<endl;
    myFunction(&myInt); //the "&" tell the program to take the address of myInt and pass that address to myFunction
    cout<<myInt<<endl;

    delete dinamic_pointer;

}