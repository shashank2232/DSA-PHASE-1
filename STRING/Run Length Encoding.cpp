//RUN LENGTH ENCODING 
#include <iostream>
#include<cstring>
using namespace std;
string compressedString(string str)
{
    int n=str.length();             //storing length of string in n
    string output;                  //creating output string to store output
    for(int i=0;i<n;i++)
    {
        int count=1;      
        while(i<n-1 && str[i+1]==str[i])       //will run till last element and till next element is same as current
        {
            count++;                          //increase count when elements are same
            i++;                              //move i to next element
        }
        output+=str[i];                        //adding string to output
        output+=to_string(count);              //adding its count to output,how many times is repeated
    }
    if(output.length()>str.length())           //if size of output is greater than str,return str
    {
        return str;
    }
    return output;
}

int main() {
	// your code goes here
    string s1="aaabbcc";
    cout<<compressedString(s1)<<endl;

    string s2="abcd";
    cout<<compressedString(s2)<<endl;
	return 0;
}