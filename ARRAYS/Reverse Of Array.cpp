// REVERSING AN ARRAY FROM A GIVEN POSITION
// Ex: arr = {1,2,3,4,5,6}   position=3
// output = {1,2,3,6,5,4}
#include <iostream>
#include<vector>
using namespace std;
void reverseArray(vector<int> &arr ,int n,int m)
{
	// Write your code here.
    int start=m+1;
    int end=n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main() {
	// your code goes here
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr.push_back(arr[i]);
    }
    int m;
    cin>>m;
    reverseArray(arr,n,m);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
	return 0;
}