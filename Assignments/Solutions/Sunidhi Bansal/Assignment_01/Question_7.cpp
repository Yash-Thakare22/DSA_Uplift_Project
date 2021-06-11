#include <iostream>

using namespace std;

int main()
{
    
    for(int i=1;i<=6;i++)
    {
        int coeff=1;
        for(int j=1;j<=i;j++)
        {
            cout<<coeff<<" ";
            coeff=coeff*(i-j)/j;
        }
        cout<<endl;
    }
    return 0;
}
