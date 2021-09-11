#include <iostream>
using namespace std;

void pattern( int n)
{
    if(n==0)
    return ;
    else
    { for (int i=n;i>0;i--)
        cout<<"*";
    }
    cout<< endl;
    pattern(n-1);
}

int main()
{
    int num;
    cin >> num;
    pattern(num);

    return 0;
}

