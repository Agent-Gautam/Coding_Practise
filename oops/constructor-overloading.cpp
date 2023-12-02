#include <bits/stdc++.h>
using namespace std;

class add{
    private:
    int var1;
    int var2;

    public:
    add(){
        var1 = 0;
        var2 = 0;
    }
    add(int a, int b){
        var1 = a;
        var2 = b;
    }
    add(add &obj){
        var1 = obj.var1;
        var2 = obj.var2;
    }
    void display(){
        cout<<"value of var1: "<<var1<<endl;
        cout<<"value of var2: "<<var2<<endl;
        cout<<"sum: "<<var1+var2<<endl;
    }
};
int main(){
    add obj;
    cout<<"default constructor called"<<endl;
    obj.display();
    add obj1(3,4);
    cout<<"parametrised constructor called"<<endl;
    obj1.display();
    add obj2(obj);
    cout<<"copy const called"<<endl;
    obj2.display();
}