#include <iostream>
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
	    for(int j=0;j<n-1;j++){
	        if(a[j]>a[j+1]){
	            swap(a[j],a[j+1]);
	        }
	    }
	}cout<<a[k-1];
	return 0;
}