Question 1:
*
**
***
****
*****

#include <iostream>
using namespace std;

int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}

_________________________________________________________________________________________________________________________________________________________________________________

Question 2:
*****
****
***
**
*

#include <iostream>
using namespace std;

int main()
{
    for(int i=5;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
 
_________________________________________________________________________________________________________________________________________________________________________________

Question 3:
54321
5432
543
54
5
  
#include <iostream>
using namespace std;

int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=i;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}

_________________________________________________________________________________________________________________________________________________________________________________
  
Question 4:
    *
  * * *
* * * * *

#include <iostream>
using namespace std;

int main()
{
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=(3-i);j++)
            cout<<"  ";
            
        for(int k=1;k<=((2*i)-1);k++)
            cout<<"* ";
            
        cout<<endl;
    }    
    return 0;
}
