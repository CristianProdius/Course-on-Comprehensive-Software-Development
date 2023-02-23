#include <iostream>
using namespace std;

int main(){
    int a = 7; //make an integer a and assign a value on the stack
    int *b = &a; //makeing a pointer b that points to the address af a the & is for geting the address of "a"
    cout<<b<<endl;//outputs the adrees
    cout<<*b<<endl; //outputs the value 7

    cout<<endl;

    int *c = new int;//this is a pointer containing the address of "c" on the heap
    *c = 7; //derefere c and storing the number 7
    cout<<*c;

}