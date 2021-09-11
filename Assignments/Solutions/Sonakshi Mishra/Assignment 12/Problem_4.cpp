int Solution::trailingZeroes(int A) {
     int a = 0;
    while (A / 5 > 0)
    {
        a += (A / 5);
        A /= 5;
    }
    return a;
}
