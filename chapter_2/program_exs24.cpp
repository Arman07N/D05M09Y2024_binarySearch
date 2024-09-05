
#include<bits/stdc++.h> 
using namespace std;
 

int main()
{
    float a, b, c, x;

    cout<<"\nEnter value of a : ";
    cin>>a;
    cout<<"\nEnter value of b : ";
    cin>>b;
    cout<<"\nEnter value of c : ";
    cin>>c;

   
    if ( b != 0 )
    {
        x = a/b-c;
        cout<<"\n\nBy using Equation x = a/b-c \nThe value of x is : "<<x<<endl;
    }
    else
    {
        cout<<"\nCan not divide number by Zero"<<endl;

    }

    return 0;
}