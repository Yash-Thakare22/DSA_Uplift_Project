#include <iostream>
using namespace std;
int main() 
{
    int k=0;
    for(int i=5;i>0;i--)
    {
        for(int j=5;j>k;j--)
        {
            cout<<j;
        }
        k++;
        cout<<endl;
    }
    return 0;
}
