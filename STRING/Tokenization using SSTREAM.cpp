//TOKENISATION (USING SSTREAM)
#include <iostream>
#include<sstream>
#include<vector>
#include<cstring>
using namespace std;
int main() {
	// your code goes here
    string input;
    getline(cin,input);
    
    //creating a string stream object,stringstream supports >> and << operators that allow to read and write data to our string
    stringstream ss(input);
    string token;    //output string to get the output
    vector<string>output;
    while(getline(ss,token,' '))          //here ' ' is a deliminator,at each ' ' that string will be inserted/added to vector string output
    {
        output.push_back(token);
    }
    for(string x:output)                  //displaying the output vector
    {
        cout<<x<<",";
    }
	return 0;
}
