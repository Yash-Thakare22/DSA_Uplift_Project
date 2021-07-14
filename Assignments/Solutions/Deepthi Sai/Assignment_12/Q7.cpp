int Solution::findMinXor(vector<int> &A) {
    int count=63621542;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-1;i++)
    {
        count= min(count,(A[i]^A[i+1]));
    }
    return count;
}
