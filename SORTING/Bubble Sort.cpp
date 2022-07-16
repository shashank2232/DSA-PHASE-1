//BUBBLE SORT (match elements one by one and after each iteration,largest element goes at the end)
#include <iostream>
using namespace std;
void bubbleSort(int arr[],int n)
{
    int counter=0;                   //number of iteration
    while(counter<n)                 //for n elements,number of iterations will be n-1,hence counter<n
    {
        for(int i=0;i<n-counter;i++)     //loop is running till n-counter as after each iteration,size of unsorted array will decrease by 1,as the largest element will go at the end
        {
            if(arr[i]>arr[i+1])           //if an element is greater than its next element,swap it
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
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
    bubbleSort(arr,n);
	return 0;
}

//In bubble sort,if there are n elements, there will be n-1 total iterations.
//In each iteration the largest element of array will go to last position.
//After each iteration,size of unsorted array will reduce by 1 and hence we are running loop till(n-counter).
//Here counter means the number of iteration.
