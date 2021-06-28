#include <iostream>

using namespace std;

int main()
{
    int a[5];

    for(int i=0; i<5;i++)
    {
        cin>> a[i];
    }
    int j= a[4];
    for(int i=4;i>0;i--)
    {
       a[i]=a[i-1];
    }
    a[0]=j;
    for(int i=0; i<5;i++)
    {
        cout<< a[i]<<" ";
    }
    return 0;
}
