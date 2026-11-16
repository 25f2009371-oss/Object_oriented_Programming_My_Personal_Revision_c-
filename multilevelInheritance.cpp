#include <iostream>
using namespace std;

class Base1 {
public:
    void showBase1() { cout << "Base class 1\n"; }
};


class Base2 {
public:
    void showBase2() { cout << "Base class 2\n"; }
};




class Derived : public Base1, public Base2 {
public:
    void showDerived() { cout << "Derived class"; }
};

int main() {
    Derived obj;
    int choice;

    cout << "1. Call Base1\n2. Call Base2 \n3.Call Derived \nEnter choice: ";
    cin >> choice;

    switch (choice) {
        case 1: obj.showBase1(); break;
        case 2: obj.showBase2(); break;
        case 3: obj.showDerived(); break;
        default: cout << "Invalid choice\n";
    }

    return 0;
}
