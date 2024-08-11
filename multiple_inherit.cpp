

#include <bits/stdc++.h>
using namespace std;
class Dog
{
public:
    int age;
    int weight;

public:
    void bark()
    {
        cout << "Barking..." << endl;
    }
};

class Human
{
public:
    void speak()
    {
        cout << "speaking..." << endl;
    }
};

class hybrid : public Dog , public Human
{
public:
    void weep()
    {
        cout << "Weeping..." << endl;
    }
};

int main()
{
    // Your code goes here


    hybrid h;
    h.speak();
    h.bark();

    return 0;
}