#include <iostream>
using namespace std;

int main() {
   string s;
   cin>>s;
   int n=s.size();
   for(int i=0;i<n;i++){
       for(int j=i+1;j<n;){
           if(s[i]==s[j]){
               for(int k=j;k<n;k++)
                   s[k]=s[k+1];
               n--;
           }else{
               j++;
           }
       }
   }for(int i=0;i<n;i++){
       cout<<s[i];
   }
	return 0;
}