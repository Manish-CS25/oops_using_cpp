



#include <bits/stdc++.h>
using namespace std;
class Animal {
    public:
    int age;
    int weight;

    public:
    void speak() {
        cout << "speaking..." << endl;
    }
    void eat() {
        cout << "Eating..." << endl;
    }
};


class Dog : public Animal {
    public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

class Puppy : public Dog {
    public:
    void weep() {
        cout << "Weeping..." << endl;
    }
};

int main() {
    // Your code goes here
    Puppy p;
    p.speak ();
    
    return 0;
}