int Solution::titleToNumber(string A) {
     int a= 0;
    for (int i = 0; i < A.size(); i++)
    {
        a= a * 26 + (A[i] - 'A' + 1);
    }
    return a;
}
