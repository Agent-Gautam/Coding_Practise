#include <iostream>
using namespace std;

class Point {
  int x, y;
public:
  explicit Point(int x, int y) : x(x), y(y) {} // Constructor with parameters
  int getX() { return x; }
  int getY() { return y; }
};

int main() {
  // Create a Point object using explicit constructor
  Point p(10, 20);

  // Display the coordinates of the point
  cout << "Point coordinates: (" << p.getX() << ", " << p.getY() << ")" << endl;

  return 0;
}