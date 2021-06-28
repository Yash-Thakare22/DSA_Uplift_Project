#include <iostream>

using namespace std;

    int main()
    {

        int k=0,i,n;
        cin>> n;
        int a[n];
        for(int i =0; i<n; i++ )
        {
            cin>> a[i];
        }
        for ( i=0; i<n;i++)
         {
             for ( int j =i+1; j<n;j++)
        {
            if(a[i]==a[j])
            ++k;


        }
            if (k>0)
        {
            cout<< a[i];
            break;
        }
        }

    }

