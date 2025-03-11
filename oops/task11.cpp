#include <iostream>
using namespace std;

class MyClass {
public:
  MyClass() {}
  MyClass(int x) { this->x = x; }
  int x;
};

int main() {
  // Create a basic type variable
  int a = 10;

  // Typecast the basic type variable to a class type variable
  MyClass myClass = (MyClass)a;

  // Print the value of the class type variable
  cout << myClass.x << endl;

  return 0;
}