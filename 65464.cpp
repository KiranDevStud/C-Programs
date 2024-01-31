#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class node
{
	public:
	int data;
	node* next;
};
class slist:public node
{
	node *f,*l;
	public:
	slist()
	{
		f=NULL;
		l=NULL;
	}
	void create();
	void insert();
	void deletion();
	void display();
};

 int main()
{
    slist l;
    int ch;
    do
    {
        cout<<"\n\t\t MENU";
        cout<<"\n1:Create\n2:Insert\n3:Delete\n4:Display\n5:EXIT\n";
        cout<<"\nEnter Your Choice:";
        cin>>ch;
        switch(ch)
        {
        case 1:
            l.create();
            l.display();
            break;
        case 2:
            l.insert();
            l.display();
            break;
        case 3:
            l.deletion();
            l.display();
            break;
        case 4:
            l.display();
            break;
        case 5:
            cout<<"\nExiting...!Thank you!";
			break;
		default:cout<<"\nInvalid option,renter option";
        }
    }while(ch!=5);
    return 0;
}     	    	   

void slist::create()
{
	node *t;
	t=new node;
	int n;
    cout<<"\nEnter an Element:";
    cin>>n;
    t->data=n;
    t->next= NULL;
    if(f==NULL)
    {
    	f=t;
    	l=f;
    }
    else
    {
    	 l->next=t;
    	 l=t;
    }
}
void slist::insert()
{
   node *pre,*cur;
   pre=NULL;
   cur=f;
   int count=1,pos,ch,n;
   node *t=new node;
   cout<<"\nEnter an Element:";
   cin>>n;
   t->data=n;
   t->next=NULL;
   
    cout<<"\nINSERT AT\n1:Begining\n2:End\n3:In a given position";
    cout<<"\nEnter Your Choice:";
    cin>>ch;
    switch(ch)
		{
			case 1: 
			t->next=f;
			f=t;
	    	break;
			case 2: 
			l->next=t;
			l=t;
			break;
			case 3:
			cout<<"Enter the position\n";
			cin>>pos;
			while(count!=pos)
			{
				pre=cur;
				cur=cur->next;
				count++;
			}
			if(count==pos)
			{
				pre->next=t;
				t->next=cur;
			}
			else
				cout<<"Cannot be inserted\n";
				break;
		}
	
}

void slist::deletion()
{
   node *pre,*cur;
   pre=NULL;
   cur=f;
   int count=1,pos,ch;	
    cout<<"\nDelete from \n1:Begining\n2:End\n3:A given position";
    cout<<"\nEnter Your Choice:";
    cin>>ch;
    switch(ch)
		{
			case 1: 
			if(f!=NULL)
			{
			cout<<"Deleted element ="<<f->data<<"\n";
			f=f->next;
			}
			else
			cout<<"Cannot be deleted\n";
	    	break;
			case 2: 
			while(cur!=l)
			{
				pre=cur;
				cur=cur->next;
				count++;
			}
			if(cur==l)
			{
				cout<<"Deleted element ="<<cur->data<<"\n";
				pre->next=NULL;
				l=pre;
			}
			else
			cout<<"Cannot be deleted\n";
			break;
			case 3:
			cout<<"Enter the position\n";
			cin>>pos;
			while(count!=pos)
			{
				pre=cur;
				cur=cur->next;
				count++;
			}
			if(count==pos)
			{
				cout<<"Deleted element ="<<cur->data<<"\n";
				pre->next=cur->next;
			}
			else
				cout<<"Cannot be deleted\n";
				break;
		}
	
} 	
   
void slist::display()
{
	node *t=f;
	if(t==NULL)
		{
		cout<<"\nList is empty/ ";
		
	}
	while(t!=NULL)
        {
      	cout<<t->data;
      	cout<<"-->";
      	t=t->next;
        }
      cout<<"NULL";
	
}