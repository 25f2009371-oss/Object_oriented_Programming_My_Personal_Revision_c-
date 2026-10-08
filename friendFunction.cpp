#include <iostream>
using namespace std;

class Mathematical {
    int a, b;   
public:
    Mathematical(int x, int y) {
        a=x;
        b=y;
    }

    friend void sum(Mathematical m);
};

void sum(Mathematical m) {
    cout << m.a + m.b << endl;  
}

int main() {
    Mathematical m1(5, 6);  
    sum(m1);                
    return 0;
}
