int Solution::findMinXor(vector<int> &A) {
    int n=A.size();
    sort(A.begin(),A.end());
    int min=A[0]^A[1];
    for(int i=1;i<n-1;i++){
        int t=A[i]^A[i+1];
        if(t<min){
            min=t;
        }

    }
    return min;
}
