//spiral print of 2-d array
#include <iostream>
using namespace std;
void spiralPrint(int arr[][4],int n,int m)
{
    int startRow=0;                  //from startCol to endCol
    int endRow=n-1;                  //from endCol-1 to startCol
    int startCol=0;                  //from endRow-1 to startRow+1
    int endCol=m-1;                  //from startRow+1 to endRow

    //while loop will run till the start row is less or equal to end row and start column is less or equal to end column
    while(startRow<=endRow && startCol<=endCol)
    {
        //for startRow
        for(int col=startCol;col<=endCol;col++)
        {
            cout<<arr[startRow][col]<<" ";
        }
        startRow++;    //first row is printed
        
        //for endCol
        for(int row=startRow;row<=endRow;row++)
        {
            cout<<arr[row][endCol]<<" ";
        }
        endCol--;      //last column is printed

        //for endRow
        for(int col=endCol;col>=startCol;col--)
        {
            cout<<arr[endRow][col]<<" ";
        }
        endRow--;    //last row is printed

        //for startCol
        for(int row=endRow;row>=startRow;row--)
        {
            cout<<arr[row][startCol]<<" ";
        }
        startCol++;   //first column is printed
    }
}

int main() {
	// your code goes here
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n=4;
    int m=4;
    spiralPrint(arr,4,4);
	return 0;
}