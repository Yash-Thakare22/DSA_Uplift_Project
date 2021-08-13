/*

Question 4

Given a string str, write program reverse words in a given string

I/P:
Do problem solving
O/P:
solving problem Do

*/


#include <iostream>
using namespace std;

int main()
{
        string s;
        int begin,end,i,j=0,temp,count=0;
 
        cout<<"Enter String: ";
        getline(cin,s);
        int len=s.length();
        for(i=0;i<(len/2);i++)
        {
                temp=s[i];
                s[i]=s[len-1-i];
                s[len-1-i]=temp;
        }
        for(i=0;i<=len;i++)
        {
            if(s[i]==' ' || s[i]=='\0')
              {
                   for(begin=j,end=i-1 ; begin<(i+j)/2 ; begin++,end--)
                      {
                             temp=s[begin];
                             s[begin]=s[end];
                             s[end]=temp;
                      }
                      j=i+1;
                }
         }
 
       cout<<s<<" ";
 
       return 0;
}
