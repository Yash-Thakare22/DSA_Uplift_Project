/*
Question 6.
54321
5432
543
54
5

*/

#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int count=n;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n-i;j++)
    {
   cout<<count;
   count=count-1;
    }
    count=n;
    cout<<endl;
}
return 0;
}

