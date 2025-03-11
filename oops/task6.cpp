#include <iostream>
using namespace std;

class dynamic {
	const char* p;

public:
	dynamic()
	{
		// allocating memory at run time
		p = new char[6];
		p = "dynamically allocated memory";
	}

	void display() { cout << p << endl; }
};

int main()
{
	dynamic obj;
	obj.display();
}
