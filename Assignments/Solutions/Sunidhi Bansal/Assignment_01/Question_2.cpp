#include <iostream>

using namespace std;

int main()
{
    cout<<endl;
    int flag=0;
    for(int i=1;i<=5;i++)                   //first half of * pattern (first 5 lines)
    {
        for(int j=5;j>=i;j--)               
        {
            cout<<"* ";
        }
        for(int k=1;k<=i-1;k++)             
        {
            cout<<"  ";
        }
        for(int y=1;y<=i-1;y++)
        {
          cout<<"  ";
        }
        for(int j=5;j>=i;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    for(int i=1;i<=5;i++)             //seconf half of * pattern (last 5 lines)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        for(int k=4;k>=i;k--)
        {
            cout<<"  ";
        }
        for(int j=4;j>=i;j--)
        {
            cout<<"  ";
        }
        for(int y=1;y<=i;y++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}



