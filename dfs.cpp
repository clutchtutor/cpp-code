#include<iostream>
using namespace std;
int n,a[1000][1000],b[1000];
void depth(int p);
int main()
{
    cout << "Enter the number of vetices :";
    cin >> n;              //nodes will be numbered as 1,2,3,4... in output//
    int i,j;
    for(i=1;i<=n;i++)
    b[i]=0;                //initializing all nodes to unvisited//
    cout << "Enter the adjacency matrix :\n";
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=n;j++)
    {
        cin >> a[i][j];       //scanning adjacency matrix//
    }}
    cout << "order of visiting nodes are : 1 ";
    depth(1);                //calling dfs function from node 1//
    return 0;
}
void depth(int p)
{
    int i;
    b[p]=1;
    for(i=1;i<=n;i++)
    {
        if(a[p][i]==1&&b[i]==0)
           {
        cout<< i <<" ";
        depth(i);
           }
    }
}
