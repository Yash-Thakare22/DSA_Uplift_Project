using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
int curr=0,maxi=0;
for(int i=0;i<n;i++){
    curr=curr+a[i];
    maxi=max(maxi,curr);
    if(curr<0){
        curr=0;
    }
}
cout<<maxi;

    return 0;
}
