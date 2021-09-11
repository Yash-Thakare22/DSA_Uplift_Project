#include<bits/stdc++.h>
using namespace std;
int main(){
    string a = "aababcdd";
    int len = a.size();
    sort(a.begin(),a.end());
    for(int i=0;i<len;i++){
        if (a[i+1] != a[i]) cout<<a[i];
    }
    return 0;
}
