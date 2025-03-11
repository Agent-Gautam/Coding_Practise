#include <bits/stdc++.h>
using namespace std;

class student{
    private:
    string name;
    int roll;
    int marks;

    public:
    void input(){
        cout<<"name: "<<endl;
        cin>>name;
        cout<<"roll no.: "<<endl;
        cin>>roll;
        cout<<"marks: "<<endl;
        cin>>marks;
    }
    void display(){
        cout<<"name: "<<name<<endl;
        cout<<"roll no.: "<<roll<<endl;
        cout<<"marks: "<<marks<<endl;
    }
};

int main(){
    student s1;
    s1.input();
    s1.display();
}