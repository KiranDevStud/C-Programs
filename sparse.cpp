#include<iostream>
using namespace std;
int main()
{
    int r,c,i=0,j=0,n;
    cout<<"\nEnter row and coloumn\n";
    cin>>r>>c;
    int M[r][c],A[r*c],N[50][50];
    cout<<"\nEnter matrix elements\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>M[i][j];
        }
    }
    cout<<"\nCurrent Matrix:\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<M[i][j]<<" ";
            A[i*c+j]=M[i][j];

        }
        cout<<"\n";
    }
    n=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            while(A[n]!=0)
            {
                N[i][j]=A[n];
                n++;
            }
            
        }
    }
    cout<<"New matrix:\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<N[i][j]<<" ";
        }
        cout<<"\n";
    }

}