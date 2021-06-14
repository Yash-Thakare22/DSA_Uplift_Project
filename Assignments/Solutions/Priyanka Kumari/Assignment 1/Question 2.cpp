/* Question 2. Hollow Diamond

* * * * *  * * * * *
* * * *      * * * *
* * *          * * *
* *              * *
*                  *
*                  *
* *              * *
* * *          * * *
* * * *      * * * *
* * * * *  * * * * *         */

//Code
#include<iostream>
using namespace std;
void hollowDiamond(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*n;j++)
        {
            if(i+j<=n-1)//upper left triangle
              cout<<'*';
            else
            cout<<' ';
            if(i+n<=j)//upper right triangle
            cout<<'*';
            else
            cout<<" ";
        }
        cout<<endl;
    }
    //bottom half of pattern
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*n;j++)
        {
            if(i>=j) //bottom right triangle
            cout<<"*";
            else
            cout<<" ";
            if(i>=(2*n-1)-j)//bottom right triangle
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int num;
    cout<<"enter the number of levels of the pattern:"<<endl;
    cin>>num;
    hollowDiamond(num);
    return 0;
}

