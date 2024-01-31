#include<iostream>
using namespace std;
int main()
{
    int n,temp,m,sum=0;
    cout<<"Enter the number to be checked\n";
    cin>>n;
    temp=n;
    while(n!=0)
    {
        m=n%10;
        sum=sum+(m*m*m);
        n=n/10;
    }
    if(sum==temp)
    cout<<"\nARMSTRONG NUMBER\n";
    else
    cout<<"\nNOT AN ARMSTRONG NUMBER\n";
}