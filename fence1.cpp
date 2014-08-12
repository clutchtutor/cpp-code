#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;
main()
{
	int n,i,j,flag;
	double b,c;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		b=360/(180-a[i]);
		c=floor(b);
		cout<<b<<" "<<c;
	}
	return 0;
}