//Solving Pair Sum Problem using Hashing(unordered_set):- Time=O(N),N is size of vector
#include <iostream>
#include<vector>
#include<unordered_set>
using namespace std;
vector<int>pairSum(vector<int>arr,int sum)
{
    unordered_set<int>v;        //to store all values one by one for checking pair
    vector<int>result;         //storing answer in this vector result
    for(int i=0;i<arr.size();i++)
    {
        int x=sum-arr[i];      //storing the required value to form pair and then checking if it's available or not
        if(v.find(x)!=v.end())  //when we got the other number required for sum in the unordered_set
        {
            result.push_back(x);          //storing first value in result vector
            result.push_back(arr[i]);     //storing second value in result vector
        }
        v.insert(arr[i]);    //if x isn't present in the unordered_set,inserting arr[i] in the set
    }
    return result;           //returning the result vector as now we have our answer
}
int main() {
	// your code goes here
    vector<int>arr{10,5,2,3,-6,9,11};
    int sum=19;
    vector<int>p=pairSum(arr,sum);
    if(p.size()!=0)
    {
        cout<<p[0]<<","<<p[1];
    }
    else
    {
        cout<<"NO SUCH PAIR";
    }
	return 0;
}