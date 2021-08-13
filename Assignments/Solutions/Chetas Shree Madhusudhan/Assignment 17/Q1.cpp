// https://www.interviewbit.com/problems/highest-product/
int Solution::maxp3(vector<int> &A) {
    sort(A.begin(),A.end());
    int n = A.size();
    int x=0;
    int y = A[0]*A[1];
    int w = A[n-2]*A[n-3];
    x =  max(w*A[n-1],y*A[n-1]);    
    return x;
}