
/*

1  
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
1 5 10 10 5 1




*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
      int i, j, k,c, n;
    cin >> n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                c=1;
            else
               c=c*(i-j+1)/j;
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}
