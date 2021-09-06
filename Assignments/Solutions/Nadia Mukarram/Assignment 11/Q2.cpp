class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
       if(n==1){
           return 1;
       }
       for(int i=1;i<n;i++){
           a[i]+=a[i-1];
       }
       for(int i=1;i<n;i++){
           if(a[i-1]==a[n-1]-a[i])
           return i+1;
       }
    return -1;
        // Your code here
    }

};
