//shortest path string
#include <iostream>
#include<cstring>
using namespace std;

int main() {
	// your code goes here
    char ch[1000];
    cin.getline(ch,1000);
    int x=0;
    int y=0;
    for(int i=0;ch[i]!='\0';i++)
    {
        switch(ch[i])
        {
            case 'N': y++;        //y axis will increase for NORTH
            break;
            case 'S': y--;        //y axis will decrease for SOUTH
            break;
            case 'E': x++;        //x axis will increase for EAST
            break;
            case 'W': x--;        //x axis will decrease for WEST
            break;
        }
    }
    cout<<"Final points are:"<<x<<","<<y<<endl;
    if(x>=0 && y>=0)           //for Quadrant I
    {
        while(y--)
        {
            cout<<'N'<<",";
        }
        while(x--)
        {
            cout<<'E'<<",";
        }
    }
    if(x>=0 && y<=0)          //for Quadrant II
    {
        while(x--)
        {
            cout<<'E'<<",";
        }
        while(y++)
        {
            cout<<'S'<<",";
        }
    }
    if(x<=0 && y<=0)           //for Quadrant III
    {
        while(x++)
        {
            cout<<'W'<<",";
        }
        while(y++)
        {
            cout<<'S'<<",";
        }
    }
    if(x<=0 && y>=0)           //for Quadrant IV
    {
        while(x++)
        {
            cout<<'W'<<",";
        }
        while(y--)
        {
            cout<<'N'<<",";
        }
    }
	return 0;
}