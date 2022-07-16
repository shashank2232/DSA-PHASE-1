#include <iostream>
using namespace std;

int main() {
	// your code goes here
    // int num=5;
    // cout<<"NUMBER IS:"<<num<<endl;

    // int *ptr=&num;

    // cout<<*ptr<<endl;          // this will print value to which ptr is pointing i.e. value of num i.e. 5

    // cout<<ptr<<endl;                 // this will print address of pointer ptr where it is present

    // double d=4.3;
    // double *p1 = &d;
    // cout<<*p1<<endl;
    // cout<<p1<<endl;

    // cout<<"Size of integer is:"<<sizeof(num)<<endl;        // this will print 4 as its size of integer
    // cout<<"Size of pointer is:"<<sizeof(ptr)<<endl;        // this will print 8 as its storing the address
    // cout<<"Size pf pointer p1 is:"<<sizeof(p1)<<endl;

    // Another way of INITIALIZING
    // int i=10;
    // int *q=&i;
    // cout<<q<<endl;
    // cout<<*q<<endl;
    // int *p=0;
    // p=&i;
    // cout<<p<<endl;
    // cout<<*p<<endl;

    // playing with pointer
    int a=9;
    int *pointer = &a;
    cout<<"Before:"<<a<<endl;
    (*pointer)++;                // this will increase value of a where pointer is pointing from 9 to 10
    cout<<"Value of pointer after increment:"<<*pointer<<endl;
    cout<<"After:"<<a<<endl;

    // Copying a pointer to another pointer
    int *ptr1=pointer;
    cout<<pointer<<"->"<<ptr1<<endl;
    cout<<*pointer<<"->"<<*ptr1<<endl;

    int r=8;
    int *s=&r;
    *s=*s+1;
    cout<<*s<<endl;
    cout<<s<<endl;            // this will print address of pointer s
    s=s+1;
    cout<<s<<endl;            // this will print address of pointer s incremented by 1 i.e. if integer , it will b incremented by 4 bytes


	return 0;
}
