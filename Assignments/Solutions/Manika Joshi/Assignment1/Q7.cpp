#include <iostream>
using namespace std;

int main()
{
    int num,n;
    cout<<"Enter number of rows";
    cin>>n;
    for(int i=1;i<n+1;i++)
    {
        num=1;
        for(int j=1;j<=i;j++)
        {
            cout <<num<<" ";
            num= num*(i-j)/j;
        }
        cout<<endl;
    }
    return 0;
}
