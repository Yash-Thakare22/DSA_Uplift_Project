
/*Question 1.


             *  *  *  *  *
          *  *  *  *  *
       *  *  *  *  *
    *  *  *  *  *
 *  *  *  *  *



*/

#include <iostream>
using namespace std;
int main()  
{  

 for(int i=5;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
         cout<<" "; 
        }  
        for(int k=1;k<=5;k++)  
        {  
            cout<<"*";
        }  
        cout<<endl;  
    }  
    cout<<endl;  
}
