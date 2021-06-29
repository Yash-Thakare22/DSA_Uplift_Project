#include <iostream>
using namespace std;
int main()
{
    for(int i=1;i<=3;i++)
    {
        int a=i;
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        for(int k=2;k>=i;k--)
        {
            cout<<"  ";
        }
        for(int l=3;l>=i;l--)
        {
            cout<<"  ";
        }
        for(int m=1;m<=i;m++)
        {
            cout<<a<<" ";
            a--;
        }
        cout<<endl;
    }
    int mid=4;
    for(int i=1;i<=7;i++)
    {
        if(i<=mid)
        {
            cout<<i<<" ";
        }
        else 
        {
            cout<<--mid<<" ";
        }
    }
    return 0;
}
