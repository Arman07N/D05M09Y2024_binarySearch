/*

    Write program to read two numbers from the keyboard and display the larger value on the screen.

*/

#include<bits/stdc++.h> 

using namespace std;

int main()
{
    float no1, no2;
    cout<<"\nEnter first no : ";
    cin>>no1;

    cout<<"\nEnter second no : ";
    cin>>no2;

    cout<<"\nLarger no is  : "<<((no1>no2)?no1:no2)<<endl;
    return 0;
}