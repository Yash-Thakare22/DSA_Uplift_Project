int Solution::sqrt(int A) {
    if(A==0) return 0;
    if(A==1 ) return 1;
    int l =  1 , h =A; int ans;
    while(l<=h){
        int m = l+(h-l)/2;
        if(m*m == A) return m;
        else if(m <= A/m){
            l=m+1;
            ans=m;
        }
        else h=m-1;
    }
    return ans;
}
