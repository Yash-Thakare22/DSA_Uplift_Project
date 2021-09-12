class Solution{
    public:
    int equilibrium(long long a[], int n) {
        int s=0,sum=0;
        for(int i=0;i<n;i++)s+=a[i];
        for(int i=0;i<n;i++){
            if(sum==(s-a[i])*0.5) return i+1;
            if(sum>(s-a[i])*0.5) return -1;
            sum+=a[i];
        }
    }
};
