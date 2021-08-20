#include<bits/stdc++.h>
using namespace std;
 
bool getBit(int n,int pos){
	return (n&(1<<pos));}
	
int setBit(int n,int pos){
    return (n|(1<<pos));}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	  cin>>a[i];
	int res=0;
	for(int i=0;i<64;i++){
		int s=0;
		for(int j=0;j<n;j++){
			if(getBit(a[j],i))
			s++;	
		}
		if(s%3!=0)
		 res=setBit(res,i);
	}
	cout<<res<<endl;
	return 0;
}
