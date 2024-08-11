#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void display(){
        cout<<"Class A"<<endl;
    }
};

class B:public A{
    public:
    void display1(){
        cout<<"Class B"<<endl;
    }
};

class C:public A{
    public:
    void display2(){
        cout<<"Class C"<<endl;
    }
};


int main()
{
    // Your code goes here
    A a;
    B b;
    C c;
    a.display();
    b.display();
    b.display1();
    c.display();
    c.display2();



    return 0;
}