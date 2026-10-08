#include <iostream>
using namespace std;

class Mathematical {
public:
    void sum(int a, int b);  // declare with parameter types
};

// define function outside class
void Mathematical::sum(int a, int b) {
    cout << a + b << endl;
}

int main() {
    Mathematical m1;
    m1.sum(5, 6);  // call with arguments
    return 0;
}
