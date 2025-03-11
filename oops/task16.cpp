#include <iostream>
#include <exception>

using namespace std;

int main() {
  try {
    int x = 5;
    int y = 0;
    int z = x / y;
    cout << z << endl;
  } catch (exception &e) {
    cout << e.what() << endl;
  }
  return 0;
}