int Solution::sqrt(int A) {
    if(A==0) return 0;
    int s=1,e=A,ans;
    while(s<=e){
        int m = (s+e)/2;
        if(m<=A/m) {s=m+1; ans=m;}
        else e = m-1;
    }return ans;
}
