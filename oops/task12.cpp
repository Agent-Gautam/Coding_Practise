#include <iostream>
using namespace std;

class MyClass {
public:
  MyClass() {
    m_value = 0;
  }

  void SetValue(int value) {
    m_value = value;
  }

  int GetValue() {
    return m_value;
  }

private:
  int m_value;
};

int main() {
  MyClass myClass;
  myClass.SetValue(10);

  // Typecast the MyClass object to an int
  int value = static_cast<int>(myClass);

  cout << "The value of the MyClass object is: " << value << endl;

  return 0;
}
