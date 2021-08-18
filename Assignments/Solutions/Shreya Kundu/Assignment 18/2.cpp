#include <bits/stdc++.h>
using namespace std;

string common(string arr[],int s,int e){
    string a1=arr[s];
    string a2=arr[e];
    string com="";
    int j=0,i=0;
    while(a1.at(i)!='\0' && a2.at(j)!='\0'){
        if(a1[i]== a2[j])
        com=com+a1[i];
        else
        break;
        i++;
        j++;
    }
    return com;
}

void result(string arr[],int s,int e){
    if(s==e)
      cout<<arr[s];
    if(s+1<e){
        int mid=s+(e-s)/2;
        result(arr,s,mid);
        result(arr,mid+1,e);
        string temp=common(arr,s,e);
        cout<<temp;
    }
    
}

int main() {
    string arr[] = {"geeksforgeeks", "geeks","geek", "geezer"};
    result(arr,0,0);
    
	return 0;
}
