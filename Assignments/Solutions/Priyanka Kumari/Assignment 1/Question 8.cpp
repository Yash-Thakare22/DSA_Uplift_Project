/* Question 8:
 * * * * *
  * * * *
   * * *
    * *
     *            */
//Code
#include <iostream>
using namespace std;
void reversePyramid(int n)
{
    int i,j,k;
    for(i=n;i>=1;i--)
    {
        for(k=n-i;k>0;k--)
        {
            cout<<" ";
        }
        for(j=i;j>0;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main()
{
    int num;
    cout<<"enter number of levels of the pattern"<<endl;
    cin>>num;
    reversePyramid(num);
}

