#include<iostream>
using namespace std;

class A{
    public:
    void display(){
        cout<<"Class A"<<endl;
    }
    
    void display(int a){
        cout<<"Class A"<<endl;
    }

    void display(int a,int b){
        cout<<"Class A"<<endl;
    }
};



int main()
{
  
    A a;

    a.display();

    return 0;
}