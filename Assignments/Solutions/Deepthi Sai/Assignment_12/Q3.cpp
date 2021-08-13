int Solution::titleToNumber(string A) {
    int ans=0;
    for(int i=0;i<A.size();i++)
    {
    ans = ans*26 + A[i] - 'A' + 1;
    }
    return ans;
}
