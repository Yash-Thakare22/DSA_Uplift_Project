//print-given-pattern-recursively/
#include <iostream>
using namespace std;

void pattern(int n)
{
    if(n<1)
        return;

    else 
    {
        for(int i=0;i<n;i++)
            cout<<"*";
         cout<<endl;
         pattern(n-1);   
    }
}

int main()
{
    int m;
    cout << "Enter number";
    cin >> m;

    pattern(m);
    return 0;
}
