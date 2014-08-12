#include<iostream>
using namespace std;
int ternary(int *a,int test,int n,int start=0)
{   
	if(a[start]==test)
	{
		cout<<"Found At "<<start<<endl;
		return(0);
	}else 
	if(n==1)
	{
		cout<<"Not Found";
		return(0);
    
    }
    else
    if(test>a[n+start-1])
    {
    	cout<<"Not Found";
    	return(0);
    }
    else
    if (test<a[start])
    {
    	cout<<"Not Found";
    	return(0);
    }
	if(a[n/3+start]==test)
	{
		cout<<"Found at "<<(n/3+start);
		return(0);
	}
	else if(a[2*n/3+start]==test)
	{
		cout<<"Found at "<<(2*n/3+start);
		return(0);

	}
	else if(a[n-1+start]==test)
	{
		cout<<"Found at "<<(n-1+start);
		return(0);
	}
    else if(a[start+n/3]>=test&&a[start]<=test)
	{
		ternary(a,test,n/3,start);

	}
	else if(a[start+2*n/3]>=test&&a[start+n/3]<=test)
	{
		ternary(a,test,n/3,n/3+1+start);
	
	}
	else if(a[start+n-1]>=test&&a[start+2*n/3]<=test)
	{
		ternary(a,test,n/3,2*n/3+1+start);
	
	}
};
int main()
{ int a[100];
int i,ch,test;
cout<<"Hello, Enter the length Of array";
scanf("%d",&ch);
cout<<"/n enter the elements";
for(i=0;i<ch;i++)
{
	cin>>a[i];
}
printf("Enter The test Condition");
cin>>test;
ternary(a,test,ch,0);

	
}