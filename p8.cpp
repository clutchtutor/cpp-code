#include<iostream>
using namespace std;
struct part
{
	int modelno;
	int partno;
	float cost;
};
main()
{
	part part1={23543,12345,217.5};
	part part2={53646,642514,123.9};
	cout<<"model no."<<part1.modelno;
	cout<<"Part no."<<part1.partno;
	cout<<"cost"<<part1.cost;
	cout<<endl;
	cout<<"model no."<<part2.modelno;
	cout<<"Part no."<<part2.partno;
	cout<<"cost"<<part2.cost<<endl;
}
