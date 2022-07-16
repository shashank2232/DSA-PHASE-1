//INSERTION SORT(Inserting element from unsorted array to its correct position in sorted array)
#include <iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int>arr,int n)
{
    for(int i=1;i<n;i++)
    {
        int current=arr[i];
        int j=i-1;            //i is at 2nd element,so j will point to index of 1st element
        while(j>=0 && arr[j]>current) 
        {
            arr[j+1]=arr[j];                //while loop is used to move elements forwards to create space for current
            j--;                            //j comes back one step so as to place current one step ahead of it
        }
        arr[j+1]=current;                   //putting element at its correct position
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
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertionSort(arr,n);
	return 0;
}

//WORST CASE TIME: O(N²)   BEST CASE TIME: O(N) when array is already sorted