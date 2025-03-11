#include <iostream>
using namespace std;

class MyClass {
public:
  MyClass() {
    cout << "Zero argument constructor called" << endl;
  }

  MyClass(int x) {
    cout << "Parameterized constructor called with argument " << x << endl;
  }
};

int main() {
  MyClass obj1; // Zero argument constructor is called
  MyClass obj2(10); // Parameterized constructor is called with argument 10

  return 0;
}