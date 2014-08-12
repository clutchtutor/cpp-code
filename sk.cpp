#include<iostream>

using namespace std;
#include<vector>
 
/* This function calculates (a^b)%MOD */
long long pow(long a, long b, long MOD)
{
    long long x=1,y=a; 
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x=(x*y);
            if(x>MOD) x%=MOD;
        }
        y = (y*y);
        if(y>MOD) y%=MOD; 
        b /= 2;
    }
    return x;
}
 
long long InverseEuler(long n, long MOD)
{
    return pow(n,MOD-2,MOD);
}
 
long long C(long n, long r, long MOD)
{
    vector<long long> f(n + 1,1);
    for (int i=2; i<=n;i++)
        f[i]= (f[i-1]*i) % MOD;
    return (f[n]*((InverseEuler(f[r], MOD) * InverseEuler(f[n-r], MOD)) % MOD)) % MOD;
}
int main()
{
	long i,j,test,m,n,mul,sum,result=1,temp;
	cin>>test;
	while(test>0)
	{  test--;
		cin>>m>>n;
		sum=m+n-2;
		if(n>m)

		{temp=n;
			n=m;
			m=temp;

		}

		cout<<C(sum,n-1,1000000007)<<endl;

	}
return 0;

}