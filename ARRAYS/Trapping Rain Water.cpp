#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int trappedWter(vector<int>water)
{
    int n=water.size();
    //corner case, if there are only 2 or less bars,water won't get stored
    if(n<=2)
    {
        return 0;
    }
    vector<int>left(n,0);                     //having n elements, all 0
    left[0]=water[0];
    for(int i=1;i<n;i++)
    {
        left[i]=max(water[i],left[i-1]);      //storing max of each elements in left vector one by one from left to right
    }
    vector<int>right(n,0);                    //having n elements, all 0
    right[n-1]=water[n-1];
    for(int i=n-2;i>=0;i--)
    {
        right[i]=max(water[i],right[i+1]);    //storing max of each elements in right vector one by one from right to left
    }
    int sum=0;                                //to store total units of water stored
    for(int i=0;i<n;i++)
    {
        sum+=min(left[i],right[i])-water[i];
    }
    return sum;
}

int main() {
	// your code goes here
    vector<int>water{0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trappedWter(water);
	return 0;
}