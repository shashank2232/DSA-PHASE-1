// BOOK ALLOCATION PROBLEM (MINIMUM PAGES ALLOTED TO A STUDENT)
#include <iostream>
using namespace std;
bool allocationPossible(int arr[],int n,int m,int mid)
{
    int studentCount=1;
    int pageSum=0;
    for(int i=0;i<n;i++)
    {
        //if by adding current element(arr[i]) and pageSum,we don't cross mid value,add both
        if(pageSum+arr[i]<=mid)                 
        {
            pageSum+=arr[i];
        }
        // else we now that student has been allocatted the books so we need to move to the next student
        else{
        studentCount++;
        // if number of students cross the given students(m) or if our current element(arr[i]) 
        // becomes greater than mid,return false so that it puts start at mid+1 and tries to find a POSSIBLE SOLUTION
        if(studentCount>m || arr[i]>mid)
        {
            return false;
        }
        // if this above condition isn't true put that current element(arr[i]) in our pageSum
        pageSum=arr[i];
     }
    }
    return true;
}
int bookAllocation(int arr[],int n,int m)
{
    int start=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int end=sum;
    int answer;
    // when our end crosses our start , means we have our answer in answer variable,so then just return answer
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        // if current mid is a POSSIBLE SOLUTION,store it in answer variable and move left/backwards i.e. (end=mid-1)
        if(allocationPossible(arr,n,m,mid))
        {
            answer=mid;
            end=mid-1;
        }
        // else if not a POSSIBLE SOLUTION means to find our possible solution we have to go further as we won't get 
        // any solution in left , hence (start=mid+1)
        else{
            start=mid+1;
        }
    }
    return answer;
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
    int m;
    cin>>m;
    cout<<endl<<bookAllocation(arr,n,m);
	return 0;
}