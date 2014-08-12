#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
main()
{
	ofstream myfile;
	myfile.open("prime.txt");
	int flag=0;
	long long i,j;
	double a;
	for(i=2;i<10000000000;i++)
	{
		flag=0;
		a=sqrt(i);
		for(j=a;j>=2;j--)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			continue;
		else
		{
			myfile<<i;
			myfile<<"\n";
		}
	}
	myfile.close();
	return 0;
}