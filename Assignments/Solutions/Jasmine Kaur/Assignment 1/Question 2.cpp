#include<iostream>
using namespace std;
 int main()
 {
   int i,j,k;
   //for the upper half 
   for( i=1; i<=5; i++)
   {
     for(j=i; j<=5; j++)
     {
       cout<<"*";
     }
     for(k=1; k<2*i; k++)
     {
       cout<<" ";
     }
     for(int j=i; j<=5; j++)
     {
       cout<<"*";
     }
    cout<<endl;
   }
   //for the lower half
   
   for(int i=5; i>=1; i--)
   {
     for(int j=5; j>=i; j--)
     {
       cout<<"*";
     }
     for(int k=1; k<2*i; k++)
     {
       cout<<" ";
     }
     for(int j=5; j>=i; j--)
     {
       cout<<"*";
     }
     cout<<endl;
   }

   return 0;
 }
