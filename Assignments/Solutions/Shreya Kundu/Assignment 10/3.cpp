#include<bits/stdc++.h>
using namespace std;
void bubbleS(int a[],int n){
	if (n==1)
	return ;
	for(int i=0;i<n-1;i++)
	  if(a[i]>a[i+1])
	    swap(a[i],a[i+1]);
	bubbleS(a,n-1);
}
int main(){
	int n;
	cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
       cin>>a[i];
    bubbleS(a,n);
    for(int i=0;i<n;i++)
       cout<<a[i]<<" ";
	return 0;
}
