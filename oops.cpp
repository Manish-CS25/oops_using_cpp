#include <bits/stdc++.h>
#include "game.cpp"

using namespace std;

class Hero
{

    // properties
private:
    int health;

public:
    char level;
    char *name;
   static int time;

    // constructor

    Hero()
    {

        cout << "default constructor called" << endl;
        name = new char[100];
    }

    // copy constructor created manually
    // Hero(Hero &h)
    // {
    //     this->health = h.health;
    //     this->level = h.level;
    //     cout << "copy constructor called" << endl;
    // }

    Hero(int health)
    {
        this->health = health;
        cout << "parameterized constructor called" << endl;
    }

    // parameterized constructor

    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
        cout << "parameterized constructor called" << endl;
    }

    // methods for the class to get and set the properties

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }
    void setLevel(char l)
    {
        level = l;
    }

    void setHealth(int k)
    {
        health = k;
    }

    void print()
    {
        cout << "health: " << this->health << endl;
        cout << "level: " << this->level << endl;
        cout << "name: " << this->name << endl;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

   static int random()
    {
        return time;
    }





    // destructor
    ~Hero()
    {
        cout << "destructor called" << endl;
       
    }
};
 


int Hero::time = 5;

int main()


  
{   
    cout<<Hero::random()<<endl;









    
    // cout<<Hero::time<<endl;

    // Hero t ;
    // cout<<t.time<<endl;

    // Hero m;
    // m.time = 10;
    // cout<<m.time<<endl;
    // cout<<t.time<<endl;
    
    
    
    //static object
    // Hero a;

    // //dynamic object    
    // Hero *b = new Hero;
    // // manual deletion of dynamic object
    // delete b;

}






    // Hero h1;
    // h1.setHealth(100);
    // h1.setLevel('A');
    // char name[4] = "max";
    // h1.setName(name);

    // h1.print();

    // use default constructor
    // Hero h2(h1);
    // Hero h2 = h1;
    // h2.print();

    // h1.name[0] = 'G';
    // h1.print();
    // h2.print();

    // h1 = h2;
    // h1.print();
    // h2.print();

    // Hero max(10, 'A');
    // max.print();

    // // copy constructor
    // Hero raj(max);
    // raj.print();

    // object created statically

    // cout << "hi" << endl;
    // Hero ram(10);
    // // cout << "hello" << endl;

    // cout<<"address of ram: "<<&ram<<endl;

    // Hero temp(10, 'A');
    // temp.print();

    // // dynamically created object
    // Hero *shyam = new Hero(11, 'B');
    // shyam->print();

    /*
    // static memory allocation

    Hero m;

    m.setHealth(100);
    m.setLevel('A');

    cout << "size: " << sizeof(m) << endl;
    cout << "health of m: " << m.getHealth() << endl;
    cout << "level of m: " << m.getLevel() << endl;

    // dynamic memory allocation
    Hero *n = new Hero;

    n->setHealth(200);
    n->setLevel('B');

    cout << "size: " << sizeof(m) << endl;
    cout << "health of m: " << (*n).getHealth() << endl;
    cout << "level of m: " << (*n).getLevel() << endl;

    // // obect creation
    // Game g;
    // Hero h;
    // cout << "size: " << sizeof(h) << endl;

    // Hero kuku;
    // // kuku.health = 100;
    // kuku.level = 'A';

    // // cout << "Health of Kuku: " << kuku.health << endl;
    // cout << "Level of Kuku: " << kuku.level << endl;

    // cout << "Health of Kuku: " << kuku.getHealth() << endl;
    // kuku.setHealth(100);
    // cout << "Health of Kuku: " << kuku.getHealth() << endl;

    // cout << "size of h: " << sizeof(h) << endl;

    */

//     return 0;
// }
