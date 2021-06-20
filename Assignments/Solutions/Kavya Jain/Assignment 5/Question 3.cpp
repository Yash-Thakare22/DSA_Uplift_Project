#include <iostream>
using namespace std;

int main()
{
    int n1,n2,j,i,k=0;
    cout<<"Enter size of 1st array ";
    cin>>n1;
    cout<<"Enter sorted array ";
    int a[n1];
    for(int i=0;i<n1;i++)
        cin>>a[i];
    cout<<"Enter size of 2nd array ";
    cin>>n2;
    cout<<"Enter sorted array ";
    int b[n2];
    for(int i=0;i<n2;i++)
        cin>>b[i]; 
   for(i=0;i<n1;i++)
   {
       if(a[i]>=b[0] && a[i]<=b[n2-1])
       {
           for(j=k;j<n2;j++)
           {
               if(a[i]==b[j])
               {
                   cout<<a[i]<<" ";
                   break;
                   k++;
               }
           }
       }
   }
    
    

    return 0;
}
