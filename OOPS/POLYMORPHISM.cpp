// 1. Function Overloading 
//  #include <iostream>
// using namespace std;
// // Function with two parameters
// int add(int num1, int num2) {
//     return num1 + num2;
// }
// // Function with three parameters
// int add(int num1, int num2, int num3) {
//     return num1 + num2 + num3;
// }
// int main() {
//     cout << add(10, 20) << endl;
//     cout << add(10, 20, 30);
//     return 0;
// }

// 2. Operator Overloading
#include<iostream>
using namespace std;
class Complex {
    private:
        int real, imag;
    public:
        Complex(int r = 0, int i = 0) {
            real = r;
            imag = i;
        }
    // This is automatically called when '+' is used with 
    // between two Complex objects 
    Complex operator + (Complex
        const & b) {
        Complex a;
        a.real = real + b.real;
        a.imag = imag + b.imag;
        return a;
    }
    void print() {
        cout << real << " + i" << imag << endl;
    }
};
int main() {
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2; // An example call to "operator+" 
    c3.print();
}