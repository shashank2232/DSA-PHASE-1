//PIVOT POINT IN ARRAY(SORTED AND ROTATED)            (Make a Graph and put numbers on it for better Illustration)
#include <iostream>
using namespace std;
int getPivot(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<end)                         //because when start and end both are at same point, that element is out PIVOT.
    {
        int mid=(start+end)/2;
        // this condition tells if mid>=arr[0] our mid is lying in the first line and we have to move our start further
        // i.e. mid+1 to get our PIVOT ELEMENT
        if(arr[mid]>=arr[0])           
        {
            start=mid+1;
        }
        // else our mid is lying in the second line and we have to move end at mid(not at mid-1 as then we would go to 
        // first line and won't be able to get out PIVOT POINT)
        else if(arr[mid]<=arr[end])
        {
            end=mid;
        }
    }
    return arr[start];                  //if you want index of pivot element, return start;
    // we can either return start or return end, ITS OUR CHOICE!
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
    int pivot=getPivot(arr,n);
    cout<<"PIVOT ELEMENT IS:"<<pivot;
	return 0;
}