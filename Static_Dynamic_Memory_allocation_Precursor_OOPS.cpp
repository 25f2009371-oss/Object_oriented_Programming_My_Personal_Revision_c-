#include <iostream>
using namespace std;

class Student{
public:
string name;
int age,roll_no; 
string grade;
};


int main(){

Student *s=new Student;
(*s).name="Rohit";
(*s).age=10;
(*s).roll_no=21;
(*s).grade="A+";

cout<<s->name<<" "<<s->age<<" "<<s->roll_no<<" "<<s->grade<<endl;

}