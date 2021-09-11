int Solution::trailingZeroes(int A) {
    int t=5,s=0;
    while(A/t>0){
        s+=A/t;
        t*=5;

    }
    return s;
}
