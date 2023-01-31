#include <iostream>
using namespace std;

int main(){
    char topping[3] = {'B','M','S'};
    int persons = 4;

    for(int person = 0; person<persons; person++){
        for(int topping_Position = 0; topping_Position<3; topping_Position++){
            cout<<"Person "<<person<<" chose toping "<< topping[topping_Position]<<endl;
        }
        cout<<"\nPerson "<< person<<" paid"<<endl;
    }

}