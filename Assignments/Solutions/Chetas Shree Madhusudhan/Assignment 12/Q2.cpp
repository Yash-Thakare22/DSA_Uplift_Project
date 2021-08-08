// https://www.interviewbit.com/problems/trailing-zeros-in-factorial/
int Solution::trailingZeroes(int A) {
    int x=0;
    while(A/5>0){
        x+=(A/5);
        A/=5;
    }return x;
}
