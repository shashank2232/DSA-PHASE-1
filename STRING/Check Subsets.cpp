#include <iostream>
#include<string>
using namespace std;
int chechSubsets(string s1,string s2)
{
    int i=s1.length()-1;             //starting i from last position of string s1
    int j=s2.length()-1;             //starting j from last position of string s2
    while(j>=0 && i>=0)              //till j and i both are >=0
    {
        if(s1[i]==s2[j])            //if both characters are equal,move i and j both one step back
        {
            i--;
            j--;
        }
        else if(s1[i]!=s2[j])       //if both characters aren't equal,only move i one step back
        {
            i--;
        }
    }
    if(j<0)                        //now we know if j has reached end,i.e. -1,s2 is a subset of s1
    {
        return 1;
    }
    else{
        return -1;
    }
}

int main() {
	// your code goes here
    string s1="shashankmishra";
    string s2="smhas";
    int x=chechSubsets(s1,s2);          //storing answer in form of an integer in x
    if(x!=-1)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
	return 0;
}