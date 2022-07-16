//Time:O(nlogn)
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
pair<int,int>subarraySort(vector<int>arr)
{
    vector<int>a(arr);                  //making copy of vector arr,to match elements later
    sort(arr.begin(),arr.end());
    int i=0;                            //for smallest element,we'll traverse from left to right
    while(i<arr.size() && arr[i]==a[i])
    {
        i++;
    }
    int j=arr.size()-1;                 //for largest element,we'll traverse from right to left
    while(j>=0 && arr[j]==a[j])
    {
        j--;
    }
    //corner case,if array is already sorted,return {-1,-1}
    if(i==arr.size())
    {
        return {-1,-1};
    }
    return {i,j};

}
int main() {
	// your code goes here
    vector<int>arr{1,2,3,4,5,8,6,7,10,11};
    auto p=subarraySort(arr);
    cout<<p.first<<" "<<p.second;
	return 0;
}