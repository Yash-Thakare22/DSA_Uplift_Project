#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int board[11][11];

bool isPossible(int n, int row, int col)
{
    for(int i=row-1;i>=0;i--)
    {
        if(board[i][col]==1)
        return false;
    }
    
    for(int i=row-1,j=col-1;i>=0 and j>=0; i--,j--)
    {
        if(board[i][j]==1)
        return false;
    }
    
    for(int i=row-1,j=col+1;i>=0 and j<n; i--,j++)
    {
        if(board[i][j]==1)
        return false;
    }
    
    return true;
}

void nQueenHelper(int n, int row)
{
    if(row==n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            cout<<board[i][j]<<" ";
            cout<<endl;
        }
        
        cout<<endl;
        cout<<endl;
        return;
    }
    for(int j=0;j<n;j++)
    {
        if(isPossible(n,row,j))
        {
            board[row][j]=1;
            nQueenHelper(n,row+1);
            board[row][j]=0;
        }
    }
    
}



int main()
{
    int n;
    cin>>n;
    memset(board,0, 11*11*sizeof(int));
    int row=0;
    nQueenHelper(n, row);
    return 0;
}



//INHERITANCE

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class base
{
    public:
    void fun1()
    {
        cout<<"Base class";
    }
};

class derived: public base{
    public:
    void fun2()
    {
        cout<<" Derived class";
    }
};

int main()
{
    derived obj;
    obj.fun1();
}


//Constructor

class Node
{
    public:
    int data;
    Node* next;
    
    Node(int val)
    {
       data=val;
       next=NULL;
    }
};
int main()
{
    Node* a=new Node(2);
    cout<<a->data<<endl;
    
}


1.Encapsulation
2. Inheitance
3. Polymorphirm
3. Abstraction

Polymorphirm - Opeartor overloading, function overloading
Runtime- function overriding

Inline 
pure virtual
virtual
friend
final keyword

Constuctor
Destructor

//ENCAPSULATION
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class en
{
    private:
    int x=2;
    
    public:
    void print()
    {
        cout<<x<<endl;
    }
    
};

int main()
{
    en obj;
    obj.print();
}



