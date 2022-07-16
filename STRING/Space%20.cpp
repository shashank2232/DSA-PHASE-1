//replace all spaces with %20
#include <iostream>
#include<cstring>
using namespace std;
void replace_spaces(char*s)              //char arrays are passed by reference,changes done will be done in original string too
{
    int spaces=0;
    for(int i=0;s[i]!='\0';i++) 
    {
        if(s[i]==' ')
        {
            spaces++;                 //counting total spaces in string
        }
    }
    int index=strlen(s)+2*spaces;     //marking index at point of additional spaces needed
    s[index]='\0';                     //marking that part as '\0'
    for(int i=strlen(s)-1;i>=0;i--)
    {
        if(s[i]==' ')                   //if character is a space
        {
            s[index-1]='0';             //put 0 at index-1,as index is having '\0'
            s[index-2]='2';             //put 1 at index-2
            s[index-3]='%';             //put 2 at index-3
            index=index-3;              //since 3 positions are full,put index backwards by 3 position
        }
        else{
            s[index-1]=s[i];             //if char isn't a space,put that character at index-1(as index is pointing at '\0')
            index--;                     //move index 1 step back
        }
    }
}


int main() {
	// your code goes here
    char s[1000];
    cin.getline(s,1000);          //users inputs the string
    replace_spaces(s);            
    cout<<s;                      //since character arrays are passed by reference,we'll directly print s as changes made will be done in original string only
	return 0;
}