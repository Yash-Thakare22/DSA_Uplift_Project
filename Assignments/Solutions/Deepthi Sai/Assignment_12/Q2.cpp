int Solution::coverPoints(vector<int> &A, vector<int> &B) {
     int count=0;
    for(int i=1,j=1;i<A.size(),j<B.size();i++,j++)
    {
      count+=max(abs(A[i]-A[i-1]),abs(B[i]-B[i-1]));
    }
    return count;
}
