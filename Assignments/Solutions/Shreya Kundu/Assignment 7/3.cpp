#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int count = 0;
    if(!(n&(n-1)))
    {
        while(n > 1)
        {
            n >>= 1;
            count += 1;
        }}
        if(count%2==0 && count!=0)
        cout<<"Yes";
        else
        cout<<"No";
	return 0;
	
}
