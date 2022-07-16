//INVERSION COUNT (DIVIDE AND CONQUER)  Count total inversions(arr[i]>arr[i] && i<j) in an array.
#include <iostream>
using namespace std;
int crossInversions(int arr[],int start,int end)
{
    int i=start;
    int mid=(start+end)/2;
    int j=mid+1;
    int k=start;
    int output[100];
    int count=0;                           //to count cross inversions
    while(i<=mid && j<=end)                //traversing both  parts
    {
        if(arr[i]<arr[j])
        {
            output[k]=arr[i];              //put smaller element i.e. i in output array
            i++;                           //move i forwards to next element
            k++;                           //move k to next position of output array
        }
        else if(arr[j]<arr[i])
        {
            count+=(mid-i+1);            //all elements greater than arr[i] will also make an inversion sount with arr[j]
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
    for(int i=0;i<=end;i++)
    {
        arr[i]=output[i];
    }
    return count;                 //total cross inversions
}
int inversionCount(int arr[],int start,int end)
{
    //base case,if start meets or exceeds end,return
    if(start>=end)
    {
        return 0;
    }
    int mid=(start+end)/2;         //dividing array in 2 parts
    int C1=inversionCount(arr,start,mid);        //inversions in left part
    int C2=inversionCount(arr,mid+1,end);        //inversions in right part
    int CI=crossInversions(arr,start,end);       //inversions while merging array
    return C1+C2+CI;                          //total inversions
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
    cout<<inversionCount(arr,start,end);
   
	return 0;
}

//TIME : 0(NlogN)
//Space: 0(N)
