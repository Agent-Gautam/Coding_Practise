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

class square{
    private: 
    int side;
    public:
    void set(int);
    int calcArea();

};

void square::set(int s){
    side = s;
}

int square::calcArea(){
    int result = side*side;
    return result;
}

int main(){
    rectangle r1;
    cout<<"a rectangle"<<endl;
    r1.set(11,22);
    square sq1;
    cout<<"a square"<<endl;
    sq1.set(32);
    cout<<"area of rectangle: "<<r1.calcArea()<<endl;
    cout<<"area of square: "<<sq1.calcArea()<<endl;
}