// SWAP ADJACENT ELEMENTS IN ARRAY
#include <iostream>
using namespace std;
void swapAdjElements(int arr[],int n)
{
    // i will go from 0 to n and will increment by 2 not 1 because when 2 elements are swapped their work is done 
    // hence we have to move i 2 steps further for next swapping
    // ex. 1 2 3 4 5 , i is at 1 , 1 and 2 are swapped, now if we do i++ then i will come to second place where there is 1 now 
    // and will swap 1 and 3 which we don't want, hence i+=2 
    for(int i=0;i<n;i+=2)
    {
        // we'll check first that our next element is present or not, suppose we are at our last element then we'll come out and 
        // no swapping will be done
        if(i+1<n)
        {
            swap(arr[i],arr[i+1]);
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
    swapAdjElements(arr,n);
	return 0;
}