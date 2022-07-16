//subsequences string
#include <iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
void subsequence(string input,string output,vector<string>&v)
{
    //base case,when we reach leaf node,put the string in vector and return
    if(input.size()==0)
    {
        v.push_back(output);
        return;
    }
    //rec case
    char ch=input[0];  //store first element of string here,now work with rest 
    string reduced_input=input.substr(1);    //as now we have to work with rest substring

    //includes
    subsequence(reduced_input,output+ch,v);       //including the character,with the rest substring

    //excludes
    subsequence(reduced_input,output,v);          //excluding the character,with the rest substring
}
bool compare(string s1,string s2)
{
    // if(s1.length()==s2.length())              //lexiographic comparison
    // {
    //     return s1<s2;
    // }
    return s1.length()<s2.length();         //length based comparison
}

int main() {
	// your code goes here
    string input;
    cin>>input;
    string output="";
    vector<string>v;
    subsequence(input,output,v);
    sort(v.begin(),v.end(),compare);   //sorting the vector with all the subsequences
    for(auto x:v)
    {
        cout<<x<<",";
    }
	return 0;
}