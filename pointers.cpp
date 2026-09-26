#include <iostream>
using namespace std;


int main(){

    //pointers=variables that stores a memory address of another variable
    //sometime its easier to work with an address

    // & address of operator
    // * dereference operator


    string name="Bro";
    string  *pName=&name;
    cout<<*pName;


    return 0;
}