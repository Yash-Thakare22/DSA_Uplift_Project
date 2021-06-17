#include<iostream>
using namespace std;
int main()
{
    int n,count,j;
    cin>>n;
    int a[n];
    for( j=0;j<n;j++)
        cin>>a[j];
     for( j=0;j<n-j-1;j++)
        {
            if(a[0]==1)
            count++;
            
        }
     for(j=0;j<count;j++)
        {
            a[j]=0;
        }
      for(j=count;j<n;j++)
        {
            a[j]=1;
        }
        
        
           for(int j=0;j<n;j++)
        cout<<a[j]<<" ";

    return 0;
}
