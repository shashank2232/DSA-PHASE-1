//STL FUNCTIONS FOR SORTING AND REVERSING ARRAY  (SORT),(REVERSE)
#include <iostream>
#include<algorithm>
using namespace std;
int main() {
	// your code goes here
    int arr[]={4,-1,5,2,0,3,1};
    int n=sizeof(arr)/sizeof(int);
    sort(arr,arr+n); //we can also use sort(arr,arr+n,greater<int>()) to sort array in reverse order
    for(int x:arr)
    {
        cout<<x<<" ";
    }cout<<endl;
    reverse(arr,arr+n);         // will sort array reversely
     for(int x:arr)
    {
        cout<<x<<" ";
    }

	return 0;
}
