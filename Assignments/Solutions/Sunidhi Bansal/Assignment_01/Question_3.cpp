#include <iostream>

using namespace std;

int main()
{
    int h=1;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<h<<" ";
            h++;
        }
        cout<<endl;
    }

    return 0;
}

