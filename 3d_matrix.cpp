#include<iostream>
using namespace std;
int main()
{
    int m,n,o,i,j,k;
    cout<<"Enter row ,column, no of matrix\n";
    cin>>m>>n>>o;
    int A[o][m][n];
    cout<<"enter elements";
    for(k=0;k<o;k++)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>A[k][i][j];
            }
        }
    }
    cout<<"tada";
    for(k=0;k<o;k++)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<A[k][m][n];
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
}