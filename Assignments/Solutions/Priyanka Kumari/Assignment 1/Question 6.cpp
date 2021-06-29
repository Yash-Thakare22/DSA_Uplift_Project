/*Question 6.
54321
5432
543
54
5       */
#include<iostream>
using namespace std;
void reverseNumTri(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=5;j>=i;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
int main()
{
    int num;
    cout<<"enter the number of levels";
    cin>>num;
    reverseNumTri(num);
}
