/*
Question 2.

* * * * *  * * * * *
* * * *      * * * *
* * *          * * *
* *              * *
*                  *
*                  *
* *              * *
* * *          * * *
* * * *      * * * *
* * * * *  * * * * *

*/

#include <iostream>
using namespace std;

int main()
{
    int i,j;
    //loop for display upper half part of the pattern
  for(i=1; i<=10; i++){
    for(j=i; j<=10; j++){
     cout<<"*";
  }
  for(j=1; j<=(2*i-2); j++){
     cout<<" ";
  }
  for(j=i; j<=10; j++){
     cout<<"*";
  }
  cout<<endl;
}
  //loop for printing lower half part  of the pattern
for(i=1; i<=10; i++){
    for(j=1; j<=i; j++){
     cout<<"*";
  }

  for(j=(2*i-2); j<(2*10-2); j++){
     cout<<" ";
  }
  for(j=1; j<=i; j++){
     cout<<"*";
  }
  cout<<endl;
  }
 
  }
