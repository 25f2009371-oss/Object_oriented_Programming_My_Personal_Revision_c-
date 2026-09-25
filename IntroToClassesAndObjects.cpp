#include <iostream>
#include <string>
using namespace std;

/*
Access modifier
1. Public
2. Private
3. Protected

*/


class Student{
    private:
    string name,grade;
    int age,roll_no; double marks;

//function getter and setter

public:
void setname(string s){
if(s.size()==0){
    cout<<"Invalid name"<<endl;
    return ;
}
    name=s;

}

void setage(int a){
    age=a;
}

void setroll_number(int r){
    roll_no=r;
}

void setgrade(string g){
    grade=g;
}

void getinfo(){
    cout<<name<<"\n"<<age<<"\n"<<roll_no<<"\n"<<grade<<endl;
}

};


int main(){

    Student s1;
    s1.setname("Ahaan");
    s1.setage(10);
    s1.setroll_number(21);
    s1.setgrade("A+");

    s1.getinfo();



}
