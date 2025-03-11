#include <bits/stdc++.h>
using namespace std;

class active{
    private:
        int roll;
        string name;
    public:
        static int count;
    active(){
        count++;
    }
    static void display(){
        cout<<"object created: "<<active::count<<endl;
    }
};

int active::count;

int main()
{
    active obj1;
    active obj2;
    active obj3;
    active obj4;
    active obj5;
    active::display();
}