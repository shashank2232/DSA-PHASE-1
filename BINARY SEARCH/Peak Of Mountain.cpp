//FINDING PEAK ELEMENT IN ARRAY         (Make a Graph and put numbers on it for better Illustration)
#include <iostream>
using namespace std;
int peakElement(int arr[],int n)
{
    int start=0;
    int end=n-1;
    // we run this till start<end because when both start and end come at same element, we have our answer
    while(start<end)    
    {
        int mid=(start+end)/2;
        // if our element is smaller than next element meanse we need to move further to get our peak element, hense start=mid+1
        if(arr[mid]<arr[mid+1])
        {
            start=mid+1;
        }
        //now if above if didn't execute we know that either our element is greater than our next element 
        //OR our element is the PEAK ELEMENT, so we put end at our mid
        //NOTE: we dont put end at mid-1 because then we'll go to the 1st line and may not get our peak element
        else
        {
            end=mid;
        }
    }
    //now we have our peak so return either start or end,any of them
    return start;
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
    int peak=peakElement(arr,n);
    cout<<"PEAK IS AT:"<<peak;
	return 0;
}