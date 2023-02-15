//MERGE SORT (DIVIDE AND CONQUER)  Divide array in 2 parts and sort accordingly.
#include <iostream>
using namespace std;
void merge(int arr[],int start,int end)
{
    int i=start;
    int mid=(start+end)/2;
    int j=mid+1;
    int k=start;
    int output[100];
    while(i<=mid && j<=end)                //traversing both  parts
    {
        if(arr[i]<arr[j])
        {
            output[k]=arr[i];              //put smaller element i.e. i in output array
            i++;                           //move i forwards to next element
            k++;                           //move k to next position of output array
        }
        if(arr[j]<arr[i])
        {
            output[k]=arr[j];            //put smaller element i.e. j in output array
            j++;                         //move i forwards to next element
            k++;                         //move k to next position of output array
        }
    } 
    //now if any element or elements are still remaining,we'll put them in output array
    while(i<=mid)
    {
        output[k]=arr[i];
        i++;
        k++;
    }
    while(j<=end)
    {
        output[k]=arr[j];
        j++;
        k++;
    }
    // here our output array has the sorted array answer, just put it inside our array arr
    for(int i=0;i<=end;i++)
    {
        arr[i]=output[i];
    }
}
void mergeSort(int arr[],int start,int end)
{
    //base case,if start meets or exceeds end,return
    if(start>=end)
    {
        return;
    }
    int mid=(start+end)/2;         //dividing array in 2 parts
    mergeSort(arr,start,mid);      
    mergeSort(arr,mid+1,end);
    // now the array is divided till end , merge fn() will merge it in a sorted-order
    merge(arr,start,end);
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
    int start=0;
    int end=n-1;
    mergeSort(arr,start,end);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
	return 0;
}

//TIME (best,worst,average): 0(NlogN)
//Space: 0(N)
