#include<bits/stdc++.h> 
using namespace std;
 
void matrix(int column,int row=3)
{
    int m[row][column];
    cout<<"\nEnter the elements of matrix according to row wise :\n ";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<"Enter the no : ";
            cin>>m[i][j];
        }
    }
    cout<<"\nYour matrix is  : \n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<" m["<<i<<"]["<<j<<"] = "<<m[i][j]<<"\t";
        }
        cout<<"\n";
    }
}


int main()
{
    int row,column;
    cout<<"\nEnter the total no of rows of matrix : ";
    cin>>row;
    cout<<"\nEnter the total no of column of matrix : ";
    cin>>column;
    matrix(column,row);
    cout<<"\nUsing default argument \nRow = 3 and Column = "<<column;
    matrix(column);
    return 0;
}