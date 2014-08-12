#include<iostream>
using namespace std;
main()
{
	int n,d,e,g,t,h,l;
	cin>>t;
	int m[t];
	int i,j;
	for(h=0;h<t;h++)
	{
		d=0;
		e=0;
		cin>>n;
		cin>>g;
		int r[g],c[g];
		for(i=0;i<g;i++)
		{
			cin>>r[i];
		}
		for(i=0;i<g;i++)
			cin>>c[i];
		for(i=0;i<g;i++)
		{
			if((r[i]-1)>(n-r[i]))
				d=d+(n-r[i]);
			else
				d=d+(r[i]-1);
		}
		for(i=0;i<g;i++)
		{
			if((c[i]-1)>(n-c[i]))
				e=e+(n-c[i]);
			else
				e=e+(c[i]-1);
		}
		l=d+e;
		cout<<l<<endl;
	}
	return 0;
}