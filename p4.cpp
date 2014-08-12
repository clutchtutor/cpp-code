#include<iostream>
using namespace std;
main()
{
	int a,i,j,k,t;
	cin>>a;
	int b[a];
	for(i=0;i<a;i++)
		cin>>b[i];
	for(j=1;j<a;j++)
	{
		k=b[j];
		i=j-1;
		while(i>=0 && b[i]>k)
		{
			b[i]=b[i+1];
			i--;
		}
		b[i+1]=k;
	for(i=0;i<a;i++)
		cout<<b[i];
	cout<<endl;
	}
}