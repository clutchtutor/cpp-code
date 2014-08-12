#include<iostream>
using namespace std;
int n,a[1000][1000],b[1000],c[1000];
int main()
{
    cout << "Enter the number of vetices :";
    cin >> n;              //nodes will be numbered as 1,2,3,4... in output//
    int i,j,p=1,x=1;
    for(i=1;i<=n;i++)
    b[i]=0;                //initializing all nodes to unvisited//
    cout << "Enter the adjacency matrix :\n";
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        cin >> a[i][j];    //scanning adjacency matrix//
        cout << "order of visiting nodes are :";
        cout << "1 ";
        c[1]=1;
        b[1]=1;
    while(p<n)      //this loop acts as bfs function//
    {
        int d;
        d=c[p];
        for(j=1;j<=n;j++)
    {
        if(a[d][j]==1&&b[j]==0)
        {
            cout << j << " ";
            b[j]=1;
            x++;
            c[x]=j;
        }
    }
    p++;
    }
    return 0;
}

