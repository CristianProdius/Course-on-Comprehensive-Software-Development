#include <iostream>
using namespace std;

void function(int *adress){
    *adress = 20;
}

int *secound_function(){
    int *localVar = new int;
    *localVar = 5;
    return localVar;
}

int main(){
    int *mypointer = secound_function();

    cout <<*mypointer<< endl;
    *mypointer = 540;
    cout <<*mypointer<< endl;

    delete mypointer;

    /*
    int *mypointer;
    int *myDanamicPointer = new int;
    cout << "my pointer = "<< mypointer<<endl;
    cout << "my pointer value= "<< *mypointer<<endl;
    cout << "my danamic pointer = "<< mypointer<<endl;
    cout << "my danamic pointer value= "<< *mypointer<<endl;

    *mypointer = 5;
    *myDanamicPointer = 7;

    cout << "my pointer value= "<< *mypointer<<endl;
    cout << "my danamic pointer value= "<< *mypointer<<endl;

    delete myDanamicPointer;

    int myInt = 8;
    cout <<myInt<<endl;
    function(&myInt);
    cout<< myInt<< endl;
    */
}