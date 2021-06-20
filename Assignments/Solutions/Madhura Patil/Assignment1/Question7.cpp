Question 7.
1  
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
1 5 10 10 5 1

#include <iostream>
using namespace std;

int main() {
   for (int i=0; i<6; i++)
   {
       int val = 1;
       for(int j=0; j<=i;j++)
       {
           cout<< val <<" " ;
           val=val*(i-j)/(j+1);
       }
       cout<<endl<<endl;
       
   }
   cout<<endl;

    return 0;
}
