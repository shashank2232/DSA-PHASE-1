//find largest string among n strings
#include <iostream>
#include<cstring>
using namespace std;

int main() {
	// your code goes here
    int n;                          //number of total strings
    cin>>n;     
    cin.get();                      //to read new line 
    char sentence[1000];            //INPUT, all the strings entered by user
    char largestString[1000];             //OUTPUT,largest string among them
    int largest=0;                  //to store size of largest string
    while(n--)
    {
        cin.getline(sentence,1000);
        int len=strlen(sentence);
        if(len>largest)
        {
            largest=len;
            strcpy(largestString,sentence);
        }
    }    
    cout<<"Largest string is:"<<largestString;
	return 0;
}