#include <iostream>
using namespace std;

int *myFunction(){
    int *localVar = new int;
    *localVar = 5;
    return localVar;
}

int main(){
    int *mainPointer = myFunction();
    cout<<*mainPointer<<endl;
    *mainPointer = 540;
    cout<<*mainPointer<<endl;
    delete mainPointer;
}