#include<bits/stdc++.h>
using namespace std;

	
int check(string str1,string str2){
	int i=0,j=0;
	  while(str1[i]!='\0'){
	  	if(str1[i]==str2[0]){
	  		int x=i;
	  		while(str2[++j]!='\0'){
	  			if(str1[i]!=str2[j])
	  			++i;		
			  }
	  		 if(str2[j]=='\0')
	  		 return x+1;
		  }		
	  } 
	  return -1;	   	
	}
int main(){
	string c1="",c2="";
	cout<<"Enter container 1"<<"\n";
	cin>>c1;
	cout<<"Enter container 2"<<"\n";
	cin>>c2;

	cout<<check(c1,c2);
	return 0;
}
