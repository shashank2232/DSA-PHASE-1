//SELECTION SORT (take smallest element in unsorted array and swap it with element at beginning of the unsorted array)
//TIME: O(N²)
#include <iostream>
using namespace std;
void selectionSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)               //i will run till 2nd last element
    {
        for(int j=i+1;j<n;j++)           //j will run till last element
        {
            if(arr[j]<arr[i])            //if next element is less than previous element,swap(as in a sorted array,next element should always be greater to previous element)
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
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
    selectionSort(arr,n);
	return 0;
}