#include <iostream>
using namespace std;

// Base class 1
class A {
public:
    int x;
    A() {
        x = 10;
    }
};

// Base class 2
class B {
public:
    int y;
    B() {
        y = 20;
    }
};

// Derived class
class C : public A, public B {
public:
    int z;
    C() {
        z = x + y;
    }
};

int main() {
    C c;
    cout << "The value of x is: " << c.x << endl;
    cout << "The value of y is: " << c.y << endl;
    cout << "The value of z is: " << c.z << endl;
    return 0;
}