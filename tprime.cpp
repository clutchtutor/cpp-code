#include<iostream>
#include<ctime>
using namespace std;
main()
{
	long long int n;
	long long int i,j;
	long long int *ptr;
	long long int a[999999];
	for(i=2;i<999999;i++)
		a[i]=1;
	for(i=2;i<999999;i++)
	{
		if(a[i]==1)
		{
			for(j=2*i;j<999999;j=j+i)
				a[j]=0;
		}
	}
	cin>>n;
	long long int x[n],y[n];
	long long int z=0,m=0;
	for(i=0;i<n;i++)
	{
		cin>>x[i];
		cin>>y[i];
	}
	for(i=0;i<n;i++)
	{
		z=x[i];
		m=y[i];
		ptr=&a[z];
		while(z<=m)
		{
			if(*ptr==1)
				cout<<z<<endl;
			z++;
			ptr++;
		}
		cout<<endl;
	}
	return 0;
}
