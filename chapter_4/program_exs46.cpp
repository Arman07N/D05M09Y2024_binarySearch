#include<bits/stdc++.h> 
using namespace std;
inline int max(int a, int b, int c)
{
	return(a>b?(a>c?a:c):(b>c?b:c));
}

int main()
{
	int x,y,z;
	cout<<"Enter three numbers: ";
	cin>>x>>y>>z;
	cout<<"\n";
	cout<<"Maximum number is: "<<max(x,y,z);
	cout<<"\n";
	return(0);
}