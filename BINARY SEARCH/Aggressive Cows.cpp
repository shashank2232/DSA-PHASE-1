// AGGRESSIVE COWS   (Finding maximum distance between 2 aggressive cows)
#include <iostream>
#include<climits>                  // for using min,max
#include<algorithm>                // for using sort function
using namespace std;
bool isPossible(int arr[],int n,int k,int mid)
{
    int cowCount=1;
    int lastPos=arr[0];               // starting from 1st element
    for(int i=0;i<n;i++)
    {
        // if our distance between arr[i] and lastPos is either greater or equal to mid,
        // means we can place our cow there , so increment cowCount and match if cowCount equals
        // to k means we have placed all cows,return true
        if(arr[i]-lastPos>=mid)           
        {
            cowCount++;
            // if all cows are been placed , return true
            if(cowCount==k)
            {
                return true;
            }
            // else put lastPos on that particular ith position to again repeat process
            lastPos=arr[i];
        }
    }
    // if we come out of loop without returning true means no possible solution
    return false;
}
int aggCows(int arr[],int n,int k)
{
    sort(arr,arr+n);
    int start=0;
    int maxi=-1;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,arr[i]);
    }
    int end=maxi;
    int answer=-1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(isPossible(arr,n,k,mid))
        {
            answer=mid;
            // we'll go to right part as we want the MAXIMUM DISTANCE between the 2 cows,
            // if we wanted the minimum we would have gone to the left part
            start=mid+1;          
        }
        else{
            // if it's not a POSSIBLE SOLUTION go to left part
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
    int k;                     // number of cows
    cin>>k;
    cout<<"MAXIMUM DISTANCE:"<<aggCows(arr,n,k);
	return 0;
}