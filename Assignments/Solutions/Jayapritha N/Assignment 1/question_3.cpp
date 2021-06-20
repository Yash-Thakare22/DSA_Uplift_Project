#include<iostream>
using namespace std;

int main(){
    
    int n,i,j,k=1;
    
    cout<<"Enter the value of N :";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<k++;
        }
        cout<<endl;
        
    }    
    
    return 0;
}

