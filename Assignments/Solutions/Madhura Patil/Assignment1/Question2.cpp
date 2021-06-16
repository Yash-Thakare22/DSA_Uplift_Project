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

#include <iostream>
using namespace std;
int main() 
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<= 6-i; j++)
        {
            cout<<"* ";
        }
        for(int k=1; k<= 4*i-3  ; k++)
        {
            cout<<" ";
        }
        for(int j=1; j<= 6-i; j++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
        
    }
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        for(int k=1; k<=21- 4*i; k++)
        {
            cout<<" ";
        }
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
       return 0; 
    
} 
