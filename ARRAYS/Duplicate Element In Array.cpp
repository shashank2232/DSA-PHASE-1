// DUPLICATE IN ARRAY (An array has all emelents twice except one element occuring only once in the array,find that element)
// Example: arr = 4 2 1 3 1 , duplicate is 1
// Array will be starting from (1 to n-1)
#include <iostream>
using namespace std;
int duplicateElementInArray(int arr[],int n)
{
    int ans=0;
    // first doing XOR in the array, so now the duplicate element(element occuring twice) will be removed
    for(int i=0;i<n;i++)
    {
        ans = ans^arr[i];
    }
    // now from 1 to n-1 we will do XOR and the duplicate will only remain and we'll get our answer
    for(int i=0;i<n;i++)
    {
        ans = ans^i;
    }
    return ans;
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
    cout<<"DUPLICATE ELEMENT IS:"<<duplicateElementInArray(arr,n);
	return 0;
}

// Ex: arr = {1,2,3,4,5,2,6,7,8}   n=9
// First do XOR between the array:  1^2^3^4^5^2^6^7^8  
// now doing XOR 2 will get removed as 2^2=0 and we'll have 1^3^4^5^6^7^8^0 = 1^3^4^5^6^7^8
// now we will do start a loop from 1 to n-1 i.e. 1 to 8 and do XOR will above array(stored in answer variable)
// ans = ans^i :    1^3^4^5^6^7^8 ^  1^2^3^4^5^6^7^8 = 2^0 = 2
// so our answer in this case is 2