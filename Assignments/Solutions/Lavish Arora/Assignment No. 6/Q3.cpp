#include<iostream>
using namespace std;
int main(){
	int k;
	int n;
  cout<<"Enter the size of array :";
	cin>>n;
  cout<<"Enter the integer :";
  cin>>k;
	int a[n];
  cout<<"Enter the elements of array :";
	for(int i=0;i<n;i++)
	   cin>>a[i];
    int l=0,h=n-1;
    while(l<=h&&a[l]<=k&&a[h]>=k)
      {
      	if(l==h)
      	   {if(a[l]==k)
      	     cout<<"present";
      	    else
      	     cout<<"not present";
      	     break;
			 }
	    int ind=l+(((double)((h-l)/(a[h]-a[l])))*(k-a[l]));
	    if(a[ind]==k)
	    cout<<"present";
	    if(a[ind]<k)
	     l=ind+1;
	    if(a[ind]>k)
	    h=ind-1;
	  }
	if(!(l<=h&&a[l]<=k&&a[h]>=k))
	  cout<<"not present";
	return 0;
}