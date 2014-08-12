#include<iostream>
using namespace std;
main()
{
	string a,b;
	cin>>a;
	cin>>b;
	int i,j,k,c,d,flag=0;
	c=a.length();
	char f[c];
	i=c-1;
	j=0;
	while(1)
	{
		if(i<0)
			break;
		f[j]=a.at(i);
		j++;
		i--;

	}
	for(i=0;i<c;i++)
	{
		if(b.at(i)!=f[i])
		{
			cout<<"NO";
			exit(0);
		}
		if(b.at(i)==f[i])
			continue;
	}
	cout<<"YES";
	return 0;
}