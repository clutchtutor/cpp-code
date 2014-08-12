#include<iostream>
using namespace std;
class myclass
{
public:
	int i,j,k;
};
main()
{
	myclass a,b;
	a.i=10;
	a.j=3;
	a.k=4;
	b.i=6;
	b.j=0;
	b.k=90;
	cout<<a.i<<" "<<a.j<<" "<<a.k<<" "<<b.i<<" "<<b.j<<" "<<b.k;
	return 0; 
}