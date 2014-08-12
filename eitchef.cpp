#include<iostream>
using namespace std;
main()
{
	long long n,k,i,a,d;
	cin>>n;
	cin>>k;
	for(i=0;i<n;i++)
	{
		cin>>a;
		if(a%k==0)
			d++;
	}
	cout<<d;
	return 0;
}