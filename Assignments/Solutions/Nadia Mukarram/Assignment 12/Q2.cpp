int Solution::coverPoints(vector<int> &A, vector<int> &B) {
int n,a,b,distance = 0;
    for( n = 1 ; n < A.size(); n++)
         {
             a = (A[n] > A[n-1]) ? A[n] - A[n-1] : A[n-1] - A[n];
             b = (B[n] > B[n-1]) ? B[n] - B[n-1] : B[n-1] - B[n];
             if(a>b)
                distance += a;
            else
               distance += b;
            
         }
    return distance;
}
