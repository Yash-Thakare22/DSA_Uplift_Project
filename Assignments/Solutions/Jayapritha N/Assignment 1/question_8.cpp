#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=n; i>=1; i--)
    {
        for(int j=n-i; j>0; j--)
            cout<<" ";
        for(int j=i; j>0; j--)
            cout<<"* ";
        cout<<endl; 
    }
}

