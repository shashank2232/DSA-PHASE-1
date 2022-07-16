#include <iostream>
using namespace std;
class Human{

    public:
    int height;
    int weight;
    int age;

    public:
    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight=w;
    }
};
class Male: public Human{
    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping!"<<endl;
    }
};
int main() {
	// your code goes here
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;

    object1.sleep();

    object1.setWeight(80);
    cout<<object1.weight<<endl;
	return 0;
}


// 1. SINGLE INHERITANCE
// Syntax:
// class parent_class {
// //Body of parent class
// };
// class child_class: access_modifier parent_class {
// //Body of child class
// };

// Example of Single Inheritance 
// #include<iostream>
// using namespace std;
// // Parent class
// class Animal {
// public:
// void eat() {
// cout << "eating" << endl;
// }
// };
// // Child class
// class Dog: public Animal {
// public: void bark() {
// cout << "barking";
// }
// };
// int main() {
// // Creating an object of the child class
// Dog obj;
// // calling methods
// obj.eat();
// obj.bark();
// }


// 2. MULTI-LEVEL INHERITANCE
// Syntax:

// class parent_class {
//     //Body of parent class
// };
// class child_class: access_modifier parent_class {
//     //Body of child class
// };
// class child_class_of_child_class: access_modifier child_class {
//         //Body of class
// };

// Example Of MULTI-LEVEL INHERITANCE
// #include<iostream>
// using namespace std;
// // Parent class
// class Animal {
//     public:
//         void eat() {
//             cout << "eating" << endl;
//         }
// };
// // Child class
// class Dog: public Animal {
//     public: void bark() {
//         cout << "barking" << endl;
//     }
// };
// class BabyDog: public Dog {
//     public: void weep() {
//         cout << "weeping";
//     }
// };
// int main() {
//     // Creating an object of the child class
//     BabyDog obj;
//     // calling methods
//     obj.eat();
//     obj.bark();
//     obj.weep();
// }


// 3. MULTIPLE INHERITANCE
// // Syntax:
// class parent_class1 {
//     //Body of parent class1
// };
// class parent_class2 {
//     //Body of parent class2
// };
// class child_class: access_modifier parent_class1, access_modifier parent_class2 {
//     //Body of child class
// };

// Example of MULTIPLE INHERITANCE
// #include<iostream>
// using namespace std;
// // Parent class
// class Animal {
//     public:
//         void eat() {
//             cout << "eating" << endl;
//         }
// };
// // Parent class
// class Dog {
//     public: void bark() {
//         cout << "barking" << endl;
//     }
// };
// // Inherited class
// class BabyDog: public Animal, public Dog {
//     public: void weep() {
//         cout << "weeping";
//     }
// };
// int main() {
//     // Creating an object of the child class
//     BabyDog obj;
//     // calling methods
//     obj.eat();
//     obj.bark();
//     obj.weep();
// }

// 4. HIERARCHICAL INHERITANCE 
// Syntax:
// class parent_class {
//     //Body of parent class
// };
// class child_class1: access_modifier parent_class {
//     //Body of child class1
// };
// class child_class2: access_modifier parent_class {
//     //Body of child class2
// };
// Example Of HIERARCHICAL Inheritance
// #include<iostream>
// using namespace std;
// // Parent class
// class Animal {
//     public:
//         void eat() {
//             cout << "eating" << endl;
//         }
// };
// // child class1
// class Dog: public Animal {
//     public: void bark() {
//         cout << "barking" << endl;
//     }
// };
// // child class2
// class Cat: public Animal {
//     public: void meow() {
//         cout << "meowing" << endl;
//     }
// };
// int main() {
//     Cat obj;
//     // calling methods
//     obj.eat();
//     obj.meow();
// }

// 5. HYBRID INHERITANCE
// Syntax:
// class parent_class1 {
//     //Body of parent class1
// };
// class parent_class2 {
//     //Body of parent class1
// };
// class child_class1: access_modifier parent_class1 {
//     //Body of child class1
// };
// class child_class2: access_modifier parent_class1, access_modifier parent_class2 {
//     //Body of child class2
// };
// Example of HYBRID INHERITANCE
// #include <iostream>
// using namespace std;
// // Parent class1
// class Vehicle {
//     public:
//         Vehicle() {
//             cout << "This is a Vehicle" << endl;
//         }
// };
// //Parent class2 
// class Fare {
//     public:
//         Fare() {
//             cout << "Fare of Vehicle\n";
//         }
// };
// //Child class1
// class Car: public Vehicle {
// };
// //Child class2 
// class Bus: public Vehicle, public Fare {
// };
// // main function 
// int main() {
//     // creating object of sub class will 
//     // invoke the constructor of base class 
//     Bus obj2;
//     return 0;
// }