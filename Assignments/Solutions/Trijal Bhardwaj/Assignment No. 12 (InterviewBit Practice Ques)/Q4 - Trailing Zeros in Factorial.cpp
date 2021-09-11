// Question Link: https://www.interviewbit.com/problems/trailing-zeros-in-factorial/

/**
 * @Input A : Integer
 *
 * @Output : Integer
 */
int Solution::trailingZeroes(int A) {
    int x=0;
    while(A/5>0) {
        x+=(A/5);
        A/=5;
    }
    return x;
}
