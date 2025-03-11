#include <bits/stdc++.h>
using namespace std;

class add{
    private:
     int var1;
     int var2;
     float var3; 
     float var4;

    public:
     void sum(int a , int b){
        var1 = a;
        var2 = b;
        cout<<"value of var1: "<<var1<<endl;
        cout<<"value of var2: "<<var2<<endl;
        cout<<"sum of two variables: "<<var1+var2<<endl;
     }
     void sum(float x, float y){
        var3 = x;
        var4 = y;
        cout<<"value of var1: "<<var3<<endl;
        cout<<"value of var2: "<<var4<<endl;
        cout<<"sum of two variables: "<<var3+var4<<endl;
     }
};
int main(){
    add obj1;
    int i1 = 3;
    int i2 = 4;
    obj1.sum(i1,i2);

    add obj2;
    float f1 = 2.2;
    float f2 = 4.7;
    obj2.sum(f1,f2);
}