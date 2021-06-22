/* Question 2

Given a string str, the task is to remove all the duplicates in the given string

I/P:
aababcdd
O/P:
abcd*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    cin.get(str,100);
    int index = 0;  
   for (int i=0; i<strlen(str); i++) {
    
     int j; 
     for (j=0; j<i; j++)
        if (str[i] == str[j])
           break;
    
     if (j == i)
        str[index++] = str[i];
   }
   str[index]='\0' ;
cout<<"string wthout duplicates is "<<str<<endl;

    return 0;
}
