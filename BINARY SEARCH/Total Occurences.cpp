// TOTAL OCCURENCE
#include <iostream>
using namespace std;
int firstOcc(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int answer=-1;
    while(start<=end)
    {
        int mid=start + (end-start)/2;
        if(arr[mid]==key)
        {
            answer=mid;
            end=mid-1;          //because we have to find first occurence so we will search that element again in left,i.e., end=mid-1
        }
        else if(key>arr[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return answer;
}
int lastOcc(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int answer=-1;
    while(start<=end)
    {
        int mid=start + (end-start)/2;
        if(arr[mid]==key)
        {
            answer=mid;
            start=mid+1;          //because we have to find last occurence so we will search that element again in right,i.e.,start=mid+1
        }
        else if(key>arr[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return answer;
}
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
    int firstPos=firstOcc(arr,n,key);
    cout<<"FIRST OCC IS AT:"<<firstPos<<endl;
    int lastPos=lastOcc(arr,n,key);
    cout<<"LAST OCC IS AT:"<<lastPos<<endl;
    int totalOcc= lastPos - firstPos + 1;
    cout<<"TOTAL OCCURENCES:"<<totalOcc;
	return 0;
}