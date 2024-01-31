#include <iostream>
using namespace std;
int que[10],n=10,front=-1,rear=-1;

void insert()
{
    int val;
    if(rear==n-1)
    cout<<"overflow";
else {
    if(front==-1)
    front=0;
cout<<"Enter value to be inserted"<<endl;
cin>>val;
rear++;
que[rear]=val;
}
}


void delet()
{
    if(front==-1||front>rear)
    {cout<<"underflow"<<endl;
return ;}
else
cout<<"element deleted:"<<que[front];
front++;
}
void display()
{
    if(front==-1)
    cout<<"QUE EMPTY"<<endl;
else
for(int i=front;i<=rear;i++)
cout<<que[i]<<"\t";
}

int main() 
{
   int ch;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
   do
 {
      cout<<"Enter your choice : "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: insert();
         break;
         case 2: delet();
         break;
         case 3: display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);
   return 0;
}
