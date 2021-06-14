/*Question 7.
1  
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
1 5 10 10 5 1   */

#include<iostream>
using namespace std;
void pascalTriangle(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        int coef=1;
        for(j=1;j<=i;j++)
        {
            cout<<coef<<" ";
            coef=coef*(i-j)/j;
            
        }
        cout<<endl;
    }
}
int main()
{
    int num;
    cout<<"enter the number of levels"<<endl;
    cin>>num;
    pascalTriangle(num);
}
