//Time:O(N)
#include <iostream>
#include<vector>
#include<cmath>
#include<climits>
#include<algorithm>
using namespace std;
bool outofOrder(vector<int>arr,int i)       //check and return whether element is out of  order or not
{
    int x=arr[i];
    if(i==0)                               //to check for 1st element,if it will be greater than 2nd element,out of order
    {
        return x>arr[1];
    }
    if(i==arr.size()-1)                    //to check for last element,if it will be lesser than 2nd last element,out of order
    {
        return x<arr[i-1];
    }
    return x>arr[i+1] || x<arr[i-1];         //to check for each element,if it's greater than it's next element or lesser than previous element,out of order
}
pair<int,int>subarraySort(vector<int>arr)       //data type is pair<int,int> as we need two integers
{
    int smallest=INT_MAX;              //store the starting index of the subarray
    int largest=INT_MIN;               //store the ending index of the subarray
    for(int i=0;i<arr.size();i++)
    {
        int x=arr[i];
        if(outofOrder(arr,i))            //if element is out of order
        {
            smallest=min(smallest,arr[i]);      //if element out of order will be smaller than smallest till yet,smallest will be updated
            largest=max(largest,arr[i]);        //if element out of order will be larger than largest till yet,largest will be updated
        }
    }
    //coming out of this loop, we have the smallest and the largest element of the subarray that needs to be sorted

    if(smallest==INT_MAX)               //if smallest isn't changed,means array is already sorted
    {
        return {-1,-1};
    }
    int left=0;                        //left will give us the starting point of unsorted subarray
    while(smallest>=arr[left])
    {
        left++;
    }
    int right=arr.size()-1;           //right will give us the ending point of unsorted subarray
    while(largest<=right)
    {
        right--;
    }
    return {left,right};

}
int main() {
	// your code goes here
    vector<int>arr{1,2,3,4,5,8,6,7,9,10,11};
    auto p=subarraySort(arr);
    cout<<p.first<<" "<<p.second;
	return 0;
}