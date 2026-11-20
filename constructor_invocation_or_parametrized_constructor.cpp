#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int id;
public:
    Employee(string n, int i) : name(n), id(i) { // Fixed ':' to ','
        cout << "Employee(" << n << ")\n";
    }
};

class Manager : public Employee {
    string dept;
    const int level;
public:
    Manager(string n, int i, string d) : Employee(n, i), dept(d), level(3) {
        cout << "Manager(" << d << ")\n";
    }
    void show() {
        cout << name << " " << id << " " << dept << " L" << level << endl; // Fixed '<' to '<<'
    }
};

int main() {
    Manager m("Riya", 101, "IT");
    m.show();
    return 0;
}
