#include<iostream>
using namespace std;
int gcd(int a,int b);
main()
{
	int a,b,c,d,e=1,i;
	cin>>a;
	cin>>b;
	cin>>c;
	d=gcd(a,c);
	while(c!=0)
		{
			c=c-d;
			if(c==0)
				break;
			d=gcd(b,c);
			e++;
			c=c-d;
			if(c==0)
				break;
			d=gcd(a,c);
			e++;
		}
	if(e%2==0)
		cout<<"1";
	else
		cout<<"0";
}
int gcd(int a,int b)
{
	if(a==b)
		return a;
	else
	{
		while(a!=b)
		{
			if(a>b)
				a=a-b;
			else
				b=b-a;
		}
		return b;
	}
}