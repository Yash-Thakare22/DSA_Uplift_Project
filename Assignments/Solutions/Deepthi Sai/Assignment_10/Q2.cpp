#include <bits/stdc++.h>
using namespace std;
int maxi(int arr[],int n)
{
 if(n==1)
 return arr[0];
 else return max(arr[n-1],maxi(arr,n-1));
}
int mini(int arr[],int n)
{
 if(n==1)
 return arr[0];
 else return min(arr[n-1],mini(arr,n-1));
}
int main() {
	int arr[]={1,1,5,42,42,0,-56};
	int n= sizeof(arr)/sizeof(arr[0]);
	cout<<"max="<<maxi(arr,n)<<","<<"min="<<mini(arr,n);
	return 0;
}
