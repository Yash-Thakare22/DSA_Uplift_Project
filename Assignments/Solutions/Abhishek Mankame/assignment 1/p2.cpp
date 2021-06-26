#include <iostream>
using namespace std;
int main()
{
    cout<<endl;
    for(int i=1;i<=5;i++)   
    {
        for(int j=5;j>=i;j--)               
        {
            cout<<"* ";
        }
        for(int k=1;k<=i-1;k++)             
        {
            cout<<"  ";
        }
        for(int l=1;l<=i-1;l++)
        {
          cout<<"  ";
        }
        for(int j=5;j>=i;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    for(int i=1;i<=5;i++)     
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
        for(int l=1;l<=i;l++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}
