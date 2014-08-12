#include<iostream>
using namespace std;
main()
{
	string a;
	cin>>a;
	int l,i,c=0,d=0,flag;
	l=a.size();
	char k,b[l];
	for(i=0;i<l;i++)
		b[i]='0';  //initialising all elements of b to 0
	k=a[c];
	while(k!='\0')
	{
		flag=0;
		for(i=c+1;i<l;i++)
		{
			b[c]=k;
			if(k==a[i])		//comparing with each element to check wheter it is distinct
		   	{
		   		flag=1;
		   		break;
		   	}
		}
		for(i=0;i<c;i++)  //comparing if any element has occured b4
		{
		    if(k==b[i])
		   	{
		   		flag=1;
		   		break;
		   	}
		}
		if(flag==1)
		{
			c++;
			k=a[c];
		}
		if(flag==0)
		{	
			d++;
			c++;
			k=a[c];
		}
	}
	if(d%2==0)
		cout<<"CHAT WITH HER!";
	else
		cout<<"IGNORE HIM!";
	return 0;
}