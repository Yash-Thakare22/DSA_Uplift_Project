int Solution::trailingZeroes(int A) {
int count=0;
while(A>0)
{
 count+=A/5;
 A=A/5;
}
return count;
}
