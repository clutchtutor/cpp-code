#include<iostream>
using namespace std;
int main()
{
	double c,d,n[100];
	int e,i=0,b=0;
	while(1)
	{
		cin>>n[i];
		if(n[i]==0.00)
			break;
		i++;
		b++;
	}
	for(i=0;i<b;i++)
	{
		d=3;
		c=(1.0/2.0);
		e=1;
		while(c!=n[i] && c<n[i])
		{
			c=c+1/d;
			d++;
			e++;
		}
		cout<<e<<" card(s)"<<endl;
	}
	return 0;
}