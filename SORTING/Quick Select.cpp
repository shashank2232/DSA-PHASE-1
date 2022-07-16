//QUICK SELECT
#include <iostream>
#include<vector>
using namespace std;
int partition(vector<int>&arr,int start,int end)  //will return pivot with all elements lesser in left part and all elements greater in right part
{
    int i=start-1;
    int pivot=arr[end];
    for(int j=start;j<end;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[end]);
    return i+1;
}
int quickSelect(vector<int>&arr,int start,int end,int k)
{
    int p=partition(arr,start,end);           //will return array divided in 2 parts,left side with smaller elements and right side with greater elements
    if(p==k)
    {
        return arr[p];
    }
     /*if index of pivot is greater than k,means element lies in left part(where all elements are small),
      so search for it in left part,remove right part as it's of no use now*/
    else if(p>k)                          
    {
        return quickSelect(arr,start,p-1,k);
    }
    /*if index of pivot is lesser than k,means element lies in right part(where all elements are larger),
     so search in right part,remove left part as it's of no use now*/
    else 
    {
        return quickSelect(arr,p+1,end,k);
    }
    return -1;
}

int main() {
	// your code goes here
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<quickSelect(arr,0,n-1,k);
	return 0;
}

/* BEST CASE TIME:   O(N)
   WORSST CASE TIME: O(Nsquare)