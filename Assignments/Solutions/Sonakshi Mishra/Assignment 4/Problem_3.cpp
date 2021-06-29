#include<iostream>
#include<string.h>
using namespace std;//program to remove from first string the letters of the second
int main()
{
     string s1,s2,s3;
     int i,j,l1,l2;
   
     cin>>s1;
     cin>>s2;
   
     l1=s1.length();
     l2=s2.length();
   
     int hash[257];
     for(i=0;i<257;i++)
         hash[i]=0;
   
     for(i=0;i<l2;i++)
         hash[s2[i]]++;
       
     for(i=0;i<l1;i++)
     {
         if(hash[s1[i]]==0)
         s3=s3+s1[i]; 
     }
   
     cout<<s3<<endl;
  
 return 0;
}