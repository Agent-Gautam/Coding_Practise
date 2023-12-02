#include <bits/stdc++.h>
using namespace std;

class rectangle{

    private:
    int length;
    int breadth;
    public:
    void set(int, int);
    int calcArea();

};

void rectangle::set(int l, int b){
        length = l;
        breadth = b;
    };

int rectangle::calcArea(){
    int result = length * breadth;
    return result;
}

int main(){
    rectangle r1;
    r1.set(11,22);
    cout<<r1.calcArea()<<endl;
}
