#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
int a[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
}
}
cout<<"principal diagonal :";
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==j){
            cout<<a[i][j]<<"\t";
        }
    }
}
cout<<"secondary diagonal:";
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if((i+j)==n-1){
            cout<<a[i][j]<<"\t";
        }
    }
}

    return 0;
};
