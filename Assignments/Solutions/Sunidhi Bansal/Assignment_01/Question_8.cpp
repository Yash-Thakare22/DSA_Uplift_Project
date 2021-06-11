#include <iostream>

using namespace std;

bool is_prime(int);

int main()
{
    int h=5;
    for(int i=1;i<=5;i++)
    {
        for(int k=1;k<=i;k++)          // for spaces
        {
            if(i==1 || i==2)
            {
                break;
            }
            else
            {
                cout<<" ";
            }
        }
        if(is_prime(h) || h==1)             //since * is printed prime number of times: 5,3,2
        {                                   //checking for whether the number is prime or not.
            for(int j=h;j>=1;j--)
            {
                cout<<" * ";
            }
            cout<<endl;
        }
        h--;
    }

    return 0;
}

bool is_prime(int r)                //function to check if r is prime or not.
{
    int flag=0;
    for(int i=2;i<=r/2;i++)
    {
        if(r%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        return false;
    }
    else 
    {
        return true;
    }
}




