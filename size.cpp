#include<iostream>
#include<climits>
using namespace std;
main()
{
	int n_int=INT_MAX;
	short n_short=SHRT_MAX;
	long n_long=LONG_MAX;
	//size in bytes
	cout<<"Size of int "<<sizeof (int)<<"bytes"<<endl;
	cout<<"Size of short "<<sizeof n_short<<" bytes"<<endl;
	cout<<"Size of long "<<sizeof n_long<<" bytes"<<endl<<endl;
	//maximum size
	cout<<"Maximum int "<<n_int<<" bytes"<<endl;
	cout<<"Maximum short "<<n_short<<" bytes"<<endl;
	cout<<"Maximum long "<<n_long<<" bytes"<<endl<<endl;
	//minimum
	cout<<"Minimum int "<<INT_MIN<<endl;
	cout<<"Bits per byte "<<CHAR_BIT<<endl;
	return 0;

}