#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
main()
{
	std::cout << std::setprecision(2) << std::fixed; //for decimial precision upto 2 digit
	float a;
	float b;
	cin>>a;
	cin>>b;
	if(fmod(a,5)!=0)
		cout<<b;
	else if(a>b)
		cout<<b;
	else
	{
		float c;
		c=b-a-0.50;
		cout<<c;
	}
}