#include<iostream>
#include<string.h>
using namespace std; //reverse words in a given string
int main()
{
     string s1,s2;
     int i,j,l1;
   
      getline(cin, s1);
    
     l1=s1.length();
     
     for(i=l1-1;i>0;)
       {  
           for(j=0;j<l1;j++)
           {
               s2[j]=s1[i];
               i--;
           }
       }
   
   
   for(j=0;j<l1;j++)
     { 
         cout<<s2[j];
     }
  
 return 0;
}