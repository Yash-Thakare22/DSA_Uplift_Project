int Solution::sqrt(int A) {
    long int i;
    for(i=1;i*i<=A;i++)
    {
      if(i*i == A)
      return i;
    }
    return i-1;
}
