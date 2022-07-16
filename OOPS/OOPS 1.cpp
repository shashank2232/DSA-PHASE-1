#include <iostream>
using namespace std;
class Hero{
    // properties
    private:
    int health;
    public:
    char level;
    
    // GETTER & SETTER to access and use private data members outside the class also
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    // data type while using setter will b void
    void setHealth(int h)
    {
        health=h;
    }
    void setLevel(char ch)
    {
        level=ch;
    }


};
int main() {
	// your code goes here
    // creating an object of class Hero
    Hero h1;
    cout<<"size is:"<<sizeof(h1)<<endl;       // will print 4 as int takes 4 bytes
    // if object wants to access data members of class, we use "." operator
    
    h1.level='A';
    // cout<<"health is:"<<h1.health<<endl;
    cout<<"level is:"<<h1.level<<endl;

    // accessing health which is private using getter
    cout<<"Health is:"<<h1.getHealth()<<endl;
    h1.setHealth(70);                 // setting health to 70 using setter function
    cout<<"Health is:"<<h1.getHealth()<<endl;

    // static & dynamic memory allocation
    Hero a;               // static
    Hero *b=new Hero;     // dynamic
    cout<<"Level is:"<<(*b).level<<endl;
    cout<<"Health is:"<<(*b).getHealth()<<endl;
    // another way:
    b->setHealth(60);
    b->setLevel('V');
    cout<<"Level is:"<<b->level<<endl;
    cout<<"Health is:"<<b->getHealth()<<endl;
	return 0;
}

// In case of an EMPTY-CLASS, its object will be aloocated by 1 byte of memory.