#include <iostream>
using namespace std;

int main(){
    int *pointer;
    int *dinamic_pointer = new int;

    cout<< "pointer: "<< pointer <<endl;
    cout<< "pointer value: "<< *pointer <<endl;
    cout<< "Dinamic pointer: "<< dinamic_pointer <<endl;
    cout<< "Dinamic pointer value: "<< *dinamic_pointer <<endl;

    cout<<endl;

    *pointer = 5;
    *dinamic_pointer = 7;

    cout<< "pointer value: "<< *pointer <<endl;
    cout<< "Dinamic pointer value: "<< *dinamic_pointer <<endl;

    delete dinamic_pointer;

}