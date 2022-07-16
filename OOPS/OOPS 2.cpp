#include <iostream>
using namespace std;

class Hero{
    public:
    int health;
    char level;
    // CONSTRUCTOR (automatically gets called & created when an object is made of this class)
    Hero()
    {
        cout<<"Constructor Called!"<<endl;
    }
    // parameterised constructor
    // this pointer 
    Hero(int h)
    {
        this->health=health;           // health after = is from input, we are putting its value into our health which is a data member of class Hero
    }
    // address of current object is stored in this keyword

    // DESTRUCTOR
    ~Hero(){
        cout<<"Destructor called!"<<endl;
    }
    // for static allocation, destructor gets called automatically
    // for dynamic allocation, destructor needs to be called manually

    // STATIC KEYWORD (static members are defined outside class & we don't need any object in main() to access them) (it uses SCOPE RESOLUTION OPERATOR ::)
    static int age;
};

int Hero::age=5;



int main() {
	// your code goes here
    // cout<<"HII"<<endl;
    // // object created statically
    // Hero h1;
    // cout<<"BYE"<<endl;

    // // object created dynamically
    // Hero *h = new Hero;       // for this again the constructor will be called & it will print CONSTRUCTOR CALLED!

    // // COPY CONSTRUCTOR
    // Hero ritesh(50);
    // Hero suresh(ritesh);
    // cout<<"Health of suresh:"<<suresh.health;
    Hero a;
    Hero *b= new Hero;
    // calling destructor manually for dynamic allocation
    delete b;

    cout<<"AGE IS:"<<Hero::age<<endl;
	return 0;
}