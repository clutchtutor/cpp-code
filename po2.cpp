#include<iostream>
using namespace std;
main()
{
	int var[3]={10,100,1000};
	int i;
	int *ptr;
	ptr=var;
	for(i=0;i<3;i++)
	{
		cout<<*ptr<<endl;
		ptr++;
	}
	ptr=&var[2];
	for(i=0;i<3;i++)
	{
		cout<<*ptr<<endl;
		ptr--;
	}
}