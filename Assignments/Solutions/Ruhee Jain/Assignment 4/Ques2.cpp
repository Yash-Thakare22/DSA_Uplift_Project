/*

Question 2

Given a string str, the task is to remove all the duplicates in the given string

I/P:
aababcdd
O/P:
abcd

*/


#include <iostream>
using namespace std;
 
char *removeDuplicate(char str[], int n)
{
   int index = 0;  
   for (int i=0; i<n; i++) {
     int j;
     for (j=0; j<i; j++){
         if (str[i] == str[j])
          break; 
     }
     if (j == i)
        str[index++] = str[i];
   }
   return str;
}

int main()
{
   char str[100];
   cin.get(str,100);
   int n = sizeof(str) / sizeof(str[0]);
   cout << removeDuplicate(str, n);
}
