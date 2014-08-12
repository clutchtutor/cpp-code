#include<iostream>
main()
{
	using namespace std;
	int n,i,a;
	cin>>n;
	for(i=0;i<33;i++)
	{
		a=(i*(i+1))/2;
		if(a==n)
		{
			cout<<"YES"<<endl;
			exit(0);
		}
	}
	cout<<"NO"<<endl;
}