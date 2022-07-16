//BINARY SEARCH
#include <iostream>
using namespace std;
int main() {
	// your code goes here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int s=0;
    int e=n-1;
     int mid=(s+e)/2;
    while(s<=e)
    {
       
        if(key==arr[mid])
        {
            cout<<"Found at "<<mid;
            break;
        }
        else if(key<arr[mid])
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
	return 0;
}