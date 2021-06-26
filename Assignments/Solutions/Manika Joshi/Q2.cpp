#include <iostream>

using namespace std;

int main()
{
    int n,flag;
    cout<<"Enter number of rows(for half diamond)";
    cin>>n;
    for(int i=0;i<n;i++)
    {
     //   flag=0;
        for(int j=0;j<n-i;j++)                    //upper left triangle
            cout<<"*";

        for(int j=0;j<2*i+1;j+=2)
            cout<<" ";
            
        for(int k=0;k<n;k++)                      //upper right traingle
        {
            if(k>=i)
                cout<<"*";

            else cout<<" ";
        }

        cout<<endl;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<"*";

      for(int j=n-i;j>=0;j-=1)
             cout<<" ";

      for (int k = 0; k < n; k++) 
      {
          if (k <n-i)
              cout << " ";

          else
              cout << "*";
      }
        cout<<endl;
    }
    return 0;
}
