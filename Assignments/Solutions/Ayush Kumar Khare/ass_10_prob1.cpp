class Solution{
public:
    long long int factorial(int N){
        //code here
        if(N==0)
            return 1;
        else
            return N*factorial(N-1);
    }
};
