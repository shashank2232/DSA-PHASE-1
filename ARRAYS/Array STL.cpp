// ARRAY STL
#include <iostream>
#include<array>
using namespace std;

int main() {

    array<int,4>arr={1,2,3,4};
    // size of array
    cout<<arr.size()<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

    // to get second element of array arr
    cout<<"Element at 2nd index:"<<arr.at(2)<<endl;

    // to check if array is empty/not
    cout<<"Empty array or not "<<arr.empty()<<endl;

    // to get first element of array , front()
    cout<<"First element of array:"<<arr.front()<<endl;

    // to get last element of array , back()
    cout<<"Last element of array:"<<arr.back()<<endl;
	return 0;
}