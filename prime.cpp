#include<stdlib.h>
#include<math.h>
#include<iostream>
using namespace std;
void prime(int,int);
main()
{
		int f,i,a;
		cin>>a;
		long long b[a],c[a];
		for(i=0;i<a;i++)
		{
			cin>>b[i];
			cin>>c[i];
		}
		for(i=0;i<a;i++)
		{
			prime(b[i],c[i]);
		}
}
void prime(long long a,long long b)
{
	long long g;
	g=a;
	int e,k=0;
		e=b-a+1;
		int c[e];
		int flag,j,d,i;
		while(g<=b)
		{
			if(g==1)
			{
				g++;
				continue;
			}
			if(g==2)
			{
				cout<<"2"<<endl;
				g++;
			}
			flag=0;
			d=(int)sqrt(g);
			for(j=2;j<=d;j++)
			{
				if(g%j==0)
					{
						flag=1;
						break;
					}
			}
			if(flag==1)
			{
				g++;
				continue;
			}
			cout<<c<<endl;
			g++;
		}
			cout<<endl;
}