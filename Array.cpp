#include<iostream>
using namespace std;
class array
{
    private:int array[50],length;
    public:
    void print();
    void insert();
    void delet();
    void read();
};

void array::print()
{
    for(int i=0;i<length;i++)
    {
        cout<<array[i]<<"\t";
    }
}
void array::read()
{
    cout<<"\nEnter the length of the array:";
    cin>>length;
    cout<<"\nEnter array elements:";
    for(int i=0;i<length;i++)
    cin>>array[i];
}
void array::delet()
{
    int pos,i;
    cout<<"\nEnter position to be deleted("<<length<<"):";
    cin>>pos;
    for(i=pos;i<length;i++)
    {
        array[i]=array[i+1];
    }
    length--;
}
void array::insert()
{
    int pos,ele,i;
    cout<<"\nEnter element to be inserted:";
    cin>>ele;
    cout<<"\nEnter position at where thee element is to be inserted:";
    cin>>pos;
    for(i=length-1;i>=pos;i--)
    {
        array[i+1]=array[i];
    }
    array[pos]=ele;
    length++;
}

int main()
{
    array ob;
    ob.read();
    ob.insert();
    ob.print();
    ob.delet();
    ob.print();
    return 0;
}