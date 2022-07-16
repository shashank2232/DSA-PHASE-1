// UNIQUE ELEMENT IN ARRAY  where total elements are 2m+1 and only one element is unique
// (i.e. rest all elements will occur twice in array)
#include <iostream>
using namespace std;
int uniqueElement(int arr[],int n)
{
    int answer=0;
    // traverse whole array and take XOR of all elements
    // we know that when XOR(^) is done between equal elements they give 0 and when 0 is done XOR(^) with an element,
    // it returns that same element, so we will get our unique element
    for(int i=0;i<n;i++)
    {
        answer=answer^arr[i];
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
    cout<<"Unique Element is:"<<uniqueElement(arr,n);
	return 0;
}

// Explanation: Size of array=2m+1 means array will always contain odd elements
// arr = 1,2,3,2,1
// Here 1 is occuring twice(not a UNIQUE ELEMENT) , 2 is also occuring twice(not a UNIQUE ELEMENT), but 3 is only once
// hence 3 is a UNIQUE ELEMENT in this example