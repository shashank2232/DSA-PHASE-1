//Count spaces,digits and alphabets in string
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char arr=cin.get();  //using cin.get() as we have to read character by character
    int alpha=0;
    int digits=0;
    int spaces=0;
    while(arr!='\n')
    {
        if((arr>='a' && arr<='z') || (arr>='A' && arr<='Z'))
        {
            alpha++;
        }
        else if(arr>='0' && arr<='9')
        {
            digits++;
        }
        else if(arr==' ')
        {
            spaces++;
        }
        arr=cin.get();
    }
    cout<<alpha<<" "<<digits<<" "<<spaces;
}
