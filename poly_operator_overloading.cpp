#include<iostream>
using namespace std;

class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }
    void operator+ (B &obj){
        int val1 = this->a;
        int val2 = this->b;

        // cout<<"output:"<<val2- val1 <<endl;
        cout<<"hello manish"<<endl; 
    }

    void operator() (){
    

        cout<<"main bracket hoon:"<<this->a <<endl;}

};





int main()
{
    B obj1 , obj2;
    obj1.a = 10;
    obj2.b = 20;

    obj1 + obj2;
    obj1();


    return 0;
}