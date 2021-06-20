
#include <iostream>

using namespace std;

int main()
{
    cout<<endl;
    for(int i=1;i<=5;i++)
    {
        for(int k=4;k>=i;k--)
        {
            cout<<"   ";
        }
        for(int j=1;j<=5;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }

    return 0;
}



