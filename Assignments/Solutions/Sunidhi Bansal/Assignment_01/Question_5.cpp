#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=3;i++)
    {
        int o=i;
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        for(int k=2;k>=i;k--)
        {
            cout<<"  ";
        }
        for(int y=3;y>=i;y--)
        {
            cout<<"  ";
        }
        for(int t=1;t<=i;t++)
        {
            cout<<o<<" ";
            o--;
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
