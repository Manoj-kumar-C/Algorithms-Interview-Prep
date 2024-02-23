#include<bits/stdc++.h>
using namespace std;

class Parent{
    public:
        string name="parent";

    void outputParent(){
        cout<<name<<endl;
    }
};

class Child : public Parent{
    public:
    void output(){
        cout<<"child"<<endl;
    }
};


int main(){
    Parent p;
    p.outputParent();

    Child c;
    c.outputParent();
}