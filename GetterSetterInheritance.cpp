#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    int age;
    string name;

public:
    void setDetails(int a, string n) {
        age = a;
        name = n;}
    
    void getter() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
public:
    void func() {
        cout << "Student details -> ";
        getter();
    }
};

int main() {
    Student s1;
    s1.setDetails(20, "Rahul");
    s1.func();
    return 0;
}