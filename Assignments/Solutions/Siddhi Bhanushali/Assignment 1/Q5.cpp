#include<iostream>
using namespace std;
int main()

{
   int k=1,flag=0; 
   for(int r=1;r<=5;r++){
       flag=1;
       k=1;
     for (int c=1;c<= 9; c++)
       { 
          if (c<=r or c>=10-r)
          {
             if (c<5){
                cout<<k; 
                k++;
             }
             else{ 
                 if(flag==1 and r!=5)
                 {
                     k=k-1;
                     flag=0;
                 }
                 cout<<k--;
             }
            }
            else{
               cout<<" ";
      }
}
cout<<endl;
}

return 0;
}

