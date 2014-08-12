#include<iostream>
using namespace std;
main()
{
	int n,i,j,t,l,c,k;
	cin>>n;
	int a[1000];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(j=1;j<n;j++)
	{
		k=a[j];
		i=j-1;
		while(i>=0 && a[i]>k)
		{
			a[i+1]=a[i];
			i=i-1;
		}
		a[i+1]=k;
	}
	for(l=0;l<n;l++)
    	cout<<a[l]<<" ";
    	
	return 0;
}