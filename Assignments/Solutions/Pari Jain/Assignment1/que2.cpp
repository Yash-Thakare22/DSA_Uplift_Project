#include <iostream>

using namespace std;

int main() 

{

    int k=0,m=5,p=1;

    for(int i=5;i>0;i--)

    {

        for(int j=5;j>k;j--)

        {

            cout<<"*";

        }

        k++;

        

        for(int q=0;q<p;q++)

        {

            cout<<" ";

        }

        p=p+2;

                

        for(int n=0;n<m;n++)

        {

            cout<<"*";

        }

        m--;

        if(i!=1)
        {
        cout<<endl;
        }
    }
    for(int i=1;i<7;i++)
    {
        for(int j=k;j<5;j++)
        {
            cout<<"*";
        }
        k--;
        for(int q=p;q>0;q--)
        {
            cout<<" ";
        }
        p=p-2;
        for(int n=m;n>0;n--)
        {
            cout<<"*";
        }
        m++;
        cout<<endl;
    }
    return 0;
}

