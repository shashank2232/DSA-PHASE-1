 //SQUARE ROOT OF A NUMBER USING BINARY SEARCH (FOR THE DECIMAL PART)
#include <iostream>
using namespace std;
// we have made function type as LONG LONG INT because assume value of mid is 2pow31,mid*mid will go out of INTEGER RANGE
// and will cause INTEGER OVERFLOW, hence use are using LONG LONG INT
long long int squareRoot(int n)
    {
        // since sqrt of 0 is 0 and sqrt of 1 is 1
        if(n==0 || n==1) 
        {
            return n;
        }
        int start=0;
        int end=n-1;
        // we have made ANSWER variable as LONG LONG INT because assume value of mid is 2pow31,
        // mid*mid will go out of INTEGER RANGE and will cause INTEGER OVERFLOW, hence use are using LONG LONG INT
        long long int answer=-1;
        while(start<=end)
        {
            long long int mid=(start+end)/2;
            // we have made SQUARE variable as LONG LONG INT because assume value of mid is 2pow31,
            // mid*mid will go out of INTEGER RANGE and will cause INTEGER OVERFLOW, hence use are using LONG LONG INT
            long long int square=mid*mid;
            if(square==n)
            {
                return mid;
            }
            else if(square<n)        
            // if square<n means store the mid in answer and move forwards start to mid+1 ,
            // ex. root10=3.16 that's why we store mid in answer
            {
                answer=mid;
                start=mid+1;
            }
            else{
                // else if square>n means we have to come backwards to get the root 
                end=mid-1;
            }
        }
        return answer;
    }
double morePrecision(int x,int precision,int tempSol)            // for the decimal part of square root
{
    double factor=1;                   
    double ans=tempSol;
    for(int i=0;i<precision;i++)
    {
        factor=factor/10;
        // if precision==3
        // 0.1
        // 0.01
        // 0.001
        // below for loop, j will have ans i.e. the integer part,
        // if j*j<x will be TRUE store j in ans, then add the factor to j
        // if j*j<x is FALSE come out of loop and move to next iteration
        for(double j=ans;j*j<x;j=j+factor)
        {
            ans=j;
        }
    }
    return ans;
}
int main()
{
    int x;
    cin>>x;
    int tempSol=squareRoot(x);
    cout<<"ANSWER IS: "<<morePrecision(x,3,tempSol);      //precision 3 means give sqrt till 3 decimals after the decimal point
}