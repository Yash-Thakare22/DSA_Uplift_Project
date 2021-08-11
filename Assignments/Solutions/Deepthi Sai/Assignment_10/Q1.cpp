long long int factorial(int N){
       if(N==1 || N==0)
       return 1;
       else return N*factorial(N-1);
}
