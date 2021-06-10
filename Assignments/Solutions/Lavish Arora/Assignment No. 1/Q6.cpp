#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no. of rows :";
    cin>>n;
    cout<<endl;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}