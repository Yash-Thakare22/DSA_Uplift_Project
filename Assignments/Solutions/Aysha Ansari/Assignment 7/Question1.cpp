/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
#include <iostream>

using
*******************************************************************************/
#include <iostream>

using namespace std;
int result;
 bool getbit(int n,int pos){
    return((n&(1<<pos))!=0);
}

 int setbit(int n,int pos){
    return(n|(1<<pos));
}

 int unique_number(int a[], int n){
     for(int i=0;i<64;i++){
           int sum=0;
           for(int j=0;j<n;j++){
               if(getbit(a[j],i))
               sum++;
           }
     
     if(sum%3!=0){
         result=setbit(result ,i);
     }
 }
return result;
}
int main()
{
    int a[10]={1,2,3,1,2,3,1,2,3,4};
   cout<<unique_number(a,10);

    return 0;
}
