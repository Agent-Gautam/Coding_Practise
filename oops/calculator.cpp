#include <bits/stdc++.h>
using namespace std;

class calc
{
private:
    int a;
    int b;
    char op;

public:
    void input()
    {
        cout << "enter first number" << endl;
        cin >> a;
        cout << "enter second number" << endl;
        cin >> b;
        cout<<"choose operator : +, -, *, /"<<endl;
        cin>>op;
    }

    int compute()
    {
        switch (op)
        {
        case ('+'):
            return a + b;
            break;

        case ('-'):
            return a - b;
            break;

        case ('*'):
            return a * b;
            break;

        case ('/'):
            if (b != 0)
            {
                return a / b;
            }
            else
            {
                cout << "division with 0 not allowed";
                return 0;
            }
            break;

        default:
            cout << "operator not valid";
        };
        return 0;
    }

    void display()
    {
        cout << compute() << "\n";
    }
};

int main()
{
    calc c1;
    c1.input();
    c1.compute();
    c1.display();
}