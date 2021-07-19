// marks, name, roll no

//linked list
// singly linked list
// doubly linked list
// circular linked list
//class, struct
//1->2->
// flag=-1
//if(flag==-1)
//head=n
//temp=n
//flag=0
// 


#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;
    
    node(int x)
    {
        data=100;
        next=NULL;
    }
};

node *insert()
{
    int f;
    cout<<" If you want to enter some data,enter 1 else 0"<<endl;
    cin>>f;
    
    if(f==0)
    return NULL;
    
    int x;
    node *head,*temp;
    if(f==1)
    {
    cout<<"Enter data"<<endl;
    cin>>x;
    node *n=new node(x);
    head=n;
    temp=n;
    }
    
    cout<<"If you want to enter some data,enter 1 else 0"<<endl;
    cin>>f;
    
    while(f!=0)
    {
        cout<<"Enter data"<<endl;
        cin>>x;
        node *n=new node(x);
        temp->next=n;
        temp=n;
        cout<<"If you want to enter some data,enter 1 else 0"<<endl;
        cin>>f;
    }
    
    return head;
}

//1->2->3->NULL;

void print(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    /*if(head==NULL)
    cout<<"NO NODE"<<endl;*/
}
int main()
{

    node *head=insert();
    print(head);
    return 0;
}
