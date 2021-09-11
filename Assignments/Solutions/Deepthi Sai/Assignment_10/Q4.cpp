#include <bits/stdc++.h>
using namespace std;
int findbinary(int n)
{
    if(n==0)
    return 0;
    else return n%2 +10*(findbinary(n/2));
}
int main()
{
 int n;cin>>n;
 cout<<findbinary(n);

}
