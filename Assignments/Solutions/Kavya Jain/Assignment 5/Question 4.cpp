#include <iostream>
#include<string.h>
using namespace std;

int main()
{
   char arr[100],a[26];
   int i,len,j;
   cin.get(arr,100);
   len=strlen(arr);
   for(i=0;i<26;i++)
   {
       a[i]='a'+i;
        for(j=0;j<len;j++)
   {
      if (a[i]==arr[j])
      cout<<arr[j];
       
   }
   }
   
}
