/*

Question 1

https://www.geeksforgeeks.org/program-for-factorial-of-a-number/

*/


long long int factorial(int N){
    if(N==0){
        return 1;
    }
    else
         return N*factorial(N-1);
    
}
