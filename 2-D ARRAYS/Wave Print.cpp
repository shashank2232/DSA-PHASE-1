#include <iostream>
using namespace std;
void waveprint(int arr[][4],int n,int m)
{
    int startRow=0;
    int endRow=n-1;
    int startCol=0;
    int endCol=m-1;
        for(int row=startRow;row<=endRow;row++)
        {
            cout<<arr[row][endCol]<<" ";
        }endCol--;
        for(int row=endRow;row>=startRow;row--)
        {
            cout<<arr[row][endCol]<<" ";
        }endCol--;
         for(int row=startRow;row<=endRow;row++)
        {
            cout<<arr[row][endCol]<<" ";
        }endCol--;
         for(int row=endRow;row>=startRow;row--)
        {
            cout<<arr[row][endCol]<<" ";
        }
    
    
}

int main() {
	// your code goes here
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n=4;
    int m=4;
    waveprint(arr,n,m);
	return 0;
}
