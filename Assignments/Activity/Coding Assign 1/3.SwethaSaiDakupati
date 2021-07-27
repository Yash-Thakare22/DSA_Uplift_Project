#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int find(char c1[],char c2[]){
    //cout<<c1<<" "<<c2<<endl;
    int i,j;
    int l1=strlen(c1);
    int l2=strlen(c2);
   
        j=0;
        i=0;
        int idx,cnt=0;
        idx=max(l1,l2);
        while(i<l1 &&j<l2){
            //cout<<i<<" "<<j<<endl;
            if(c1[i]==c2[j]){ 
                idx=min(i,idx);
                cnt++;
                i++;
                j++;
            }
            else{
                cnt=0;
                i++;
            }
        }
        if(cnt==l2) return idx+1;
        else return -1;
    
  
}
int main()
{
    char c1[100000],c2[100000];
    cin>>c1>>c2;
    //cout<<c1<<" "<<c2<<endl;
    int ans=find(c1,c2);
    cout<<ans;
    return 0;
}


//Time:O(n) where n is the length of 2nd string or the shortest one
//Space: O(1)
