#include<iostream>
using namespace std;
class num
{
    private:
    int a,b,c,d;
    public:
    num()
    {}
   void get()
    {
        cout<<"Enter the 4 numbers\n";
        cin>>a>>b>>c>>d;
    }
    void show()
    {
        cout<<"a="<<a;
        cout<<"\nb="<<b;
        cout<<"\nc="<<c;
        cout<<"\nd="<<d;
    }
    void operator -()
    {
        a=-a;
        b=-b;
        c=-c;
        d=-d;
    }
};
int main()
{
    num A;
    A.get();
    cout<<"Before negation\n";
    A.show();
    cout<<"\nAfter negation\n";
    -A;
    A.show();
    return 0;
}