#include <bits/stdc++.h>
using namespace std;

class avg{
    private: 
        int var1;
        int var2;
        int var3;

    public:
    //three arguments
        void average(int a, int b, int c){
            var1 = a;
            var2 = b;
            var3 = c;
            cout<<"average of three numbers: "<<(a+b+c)/3<<endl;
        }
        void average(int a, int b){
            var1 = a;
            var2 = b;
            cout<<"average of two numbers: "<<(a+b)/2;
        }
};
int main(){
    avg obj1;
    obj1.average(2,3,4);
    obj1.average(5,8);
}