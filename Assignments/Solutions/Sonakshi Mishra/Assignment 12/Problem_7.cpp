int Solution::findMinXor(vector<int> &A) {
     int x = INT_MAX;
    int s;
    sort(A.begin(), A.end());
    for (int i = 0; i < A.size() - 1; i++)
    {
        s = A[i] ^ A[i + 1];
        if (s < x)
            x = s;
    }
    return x;
}
