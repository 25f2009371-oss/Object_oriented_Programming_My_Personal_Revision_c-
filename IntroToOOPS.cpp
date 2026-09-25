#include <iostream>
#include <string>
using namespace std;


class Student{
    public:
    string names;
    int roll_no; double marks;
};


int main(){

    Student s1;
    s1.roll_no=10;
    s1.names="Akar";
    s1.marks=100;

    cout<<s1.names<<endl;
    cout<<s1.roll_no<<endl;
    cout<<s1.marks<<endl;




}
