#include<bits/stdc++.h>
#include <iostream>

using namespace std;

void bubblesort(int a[],int n)
{
    if(n==1)
    return;
    else
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        swap(a[i],a[i+1]);
    }
    bubblesort(a, n-1);
}
int main()
{
   int a[]={2,1,3,1,32,42,3,0};
   bubblesort(a,sizeof(a)/sizeof(a[0]));
   for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
   {
       cout<<a[i]<<endl;
   }
    return 0;
}
