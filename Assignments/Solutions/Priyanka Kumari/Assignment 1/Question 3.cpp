/* Question3. Right simple triangle of increment numbers
1
2 3
4 5 6
7 8 9 10     num=4 here */
#include<iostream>
using namespace std;
void tri(int n)
{
    int x=1,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" "<<x++;
        }
        cout<<endl;
    }
}
int main()
{
    int num;
    cout<<"enter the number of levels";
    cin>>num;
    tri(num);
}

