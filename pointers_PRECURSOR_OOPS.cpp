#include <iostream>
using namespace std;


int main(){

    //pointers=variables that stores a memory address of another variable
    //sometime its easier to work with an address

    // & address of operator
    // * dereference operator


    string name="Bro";
    string  *pName=&name;
    cout<<*pName<<endl;
    int age=21;

    string *pname=&name;
    int *pAge=&age;

    cout<<*pAge<<endl;
    return 0;





string freePizzas[5]={"Pizza1","Pizza2","Pizza3","Pizza4"};


string *pfreePizzas= freePizzas;
cout<<*pfreePizzas<<endl;


}