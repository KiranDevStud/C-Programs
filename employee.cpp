#include<iostream>
using namespace std;
class employee
{
    protected:
    int eno;
    char ename[20];
    public:
    void empdata()
    {
        cout<<"Enter employee number\n";
        cin>>eno;
        cout<<"Enter employee name\n";
        cin>>ename;
    }
    void showempdata()
    {
        cout<<"Employee No: "<<eno<<"\n";
        cout<<"Employee Name: "<<ename<<" (scientist)";
    }
};
class scientist : public employee
{
    public:
    char award[20];
    void getdata()
    {
        cout<<"Award got by "<<ename<<" (scientist)";
        cin>>award;
    }
    void putdata()
    {
        cout<<"\nAward : "<<award;
    }
};
int main()
{
    scientist E;
    E.empdata();
    E.getdata();
    E.showempdata();
    E.putdata();
    return 0;
}