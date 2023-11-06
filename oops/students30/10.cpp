#include <bits/stdc++.h>
using namespace std;

class student{
    private:
        string name;
        int rollno, marks1, marks2, marks3, average;
    
    public:
        void input(){
            cout<<"enter name"<<endl;
            cin>>name;
            cout<<"enter rollno"<<endl;
            cin>>rollno;
            cout<<"enter marks1"<<endl;
            cin>>marks1;
            cout<<"enter marks2"<<endl;
            cin>>marks2;
            cout<<"enter marks3"<<endl;
            cin>>marks3;
        }
        void dispaly(){
            cout<<"name: "<<name<<endl;
            cout<<"rollno: "<<rollno<<endl;
            cout<<"marks1: "<<marks1<<endl;
            cout<<"marks2: "<<marks2<<endl;
            cout<<"marks3: "<<marks3<<endl;
            cout<<"average: "<<average<<endl;
        }
        void compute(){
            average = (marks1+marks2+marks3)/3;
        }
        void edit_name(){
            cout<<"enter new name"<<endl;
            cin>>name;
        }
        void edit_rollno(){
            cout<<"enter new roll no"<<endl;
            cin>>rollno;
        }
};

int main(){
    student s1;
    s1.input();
    s1.compute();
    s1.edit_name();
    s1.edit_rollno();
    s1.dispaly();
}