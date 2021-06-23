
#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cin>>a[i][j];
    }
int t;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        t=a[i][0];
        a[i][0]=a[i][m-1];
        a[i][m-1]=t;
    }
}
for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cout<<a[i][j]<<"\t";
    }
cout<<"\n";
}
    return 0;
}
