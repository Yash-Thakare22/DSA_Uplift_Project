class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int s=0,sum=0;
        for(int i=0;i<n;i++)s+=a[i];
        for(int i=0;i<n;i++){
            if(sum==(s-a[i])*0.5) return i+1;
            if(sum>(s-a[i])*0.5) return -1;
            sum+=a[i];
        }
    }

};