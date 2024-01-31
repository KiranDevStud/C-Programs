#include<iostream>
#include<math.h>
class power
{
    int num,pow,ans;
    public:
    {
        power(int n=2;int p=3)
        void show()
        {
            cout<<num<<" raise to"<<pow<<" is "<<ans;
        }
    }
    power::power(int n,int p)
    {
        num=n;pow=p;
        ans=pow(n,p);
    }
};
int main()
{
    power p,a(5);
    p.show();>
    a.show();
    return 0;
}