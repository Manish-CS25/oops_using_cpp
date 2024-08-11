#include<bits/stdc++.h>
using namespace std;

class Human{
    protected:
    int height;
    int weight;
    int age;

    public:

    int getage(){
        return this->age;
    }

    void setage(int age){
        this->age = age;
    }   

    void setweight(int weight){
        this->weight = weight;
    }
    int getweight(){
        return this->weight;
    }

};

class Male: protected Human{
    public:
    string color;

    void sleep(){
        cout<<"male is Sleeping"<<endl;
    }

    int getheight(){
        return this->height;
    }



};


int main(){
    Male m;
    // cout<<"Inheritance"<<endl;
    // cout<<m.age<<endl;
    // cout<<m.weight<<endl;
    cout<<m.getheight()<<endl;
    // cout<<m.color<<endl;
    //  m.sleep();
    //  m.setweight(50);
    //  cout<<m.weight<<endl;
    return 0;
    
}