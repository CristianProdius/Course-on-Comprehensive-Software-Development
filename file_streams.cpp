#include <iostream>
#include <fstream>

using namespace std;
int main(){
    //Input FIlEs
    ifstream myStream; //create a variabel of type ifstream
    myStream.open("myFile.txt"); //conect the variabel to the file 
    
    int myInt;
    int myInt2;
    int myInt3;
    myStream >> myInt>>myInt2>>myInt3; //myStream is similar to cin
   // cout<<myInt<<myInt2<<myInt3<<endl;
    myStream.close();

    //Output FILES
    ofstream myOutputStream; //create variabel of type ofsream
    myOutputStream.open("output.txt"); //conect the variable to the file
    myOutputStream << myInt<<myInt2<<myInt3; //myOutputStream is similar to cout
    
}