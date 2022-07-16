#include <iostream>
using namespace std;
class Student{
    private:
    string name;
    int age;
    int height;

    public:
    int getAge()
    {
        return this->age;
    }
};
int main() {
	// your code goes here
    Student first;
    cout<<"EVERYTHING IS FINE!"<<endl;
	return 0;
}