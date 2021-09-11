#include <bits/stdc++.h>
using namespace std;
string prime(int n,int i=2)
{
    if(n<=2)
    return (n==2)?"yes":"no";
    if(n%i==0)
    return "no";
    if(i*i>n)
    return "yes";

    return prime(n,i+1);
}
int main()
{
 int n;cin>>n;
 cout<<prime(n);

}
