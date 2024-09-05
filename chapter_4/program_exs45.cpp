#include<bits/stdc++.h> 
using namespace std;

#define MAX(a, b, c) ((a)>(b)?((a)>(c)?(1):(0)):((b)>(c)?(-1):(0)))//:(a==b)?(0):(-1))

int main()
{
	int x,y,z,s;
	cout<<"Enter three numbers: ";
	cin>>x>>y>>z;
	cout<<"\n";
	s = MAX(x,y,z);
	if(s==1)
	cout<<"The Maximum of the numbers is: "<<x;
	else if(s==0)
	cout<<"The Maximum of the numbers is: "<<z;
	else
	cout<<"The Maximum of the numbers is: "<<y;
	cout<<"\n";
	return(0);
}