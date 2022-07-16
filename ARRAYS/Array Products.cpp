#include<iostream>
#include<vector>
using namespace std;
vector<int>arrayProducts(vector<int>arr)
{
    int n=arr.size();
    vector<int>left(n,1);
    vector<int>right(n,1);
    int product=1;
    for(int i=0;i<n;i++)
    {
        product*=arr[i];
        left[i]=product;
    }
    product=1;
    for(int i=n-1;i>=0;i--)
    {
        product*=arr[i];
        right[i]=product;
    }
    vector<int>output(n,1);
    output[0]=right[1];
    output[n-1]=left[n-2];
    for(int i=1;i<n-1;i++)
    {
        output[i]=left[i-1]*right[i+1];
    }
    return output;
}
int main()
{
    vector<int>arr{1,2,3,4,5};
    auto p=arrayProducts(arr);
    for(int i=0;i<p.size();i++)
    {
        cout<<p[i]<<" ";
    }
}