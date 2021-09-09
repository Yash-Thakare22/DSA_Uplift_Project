

                                                                      DYNAMIC PROGRAMMING 
                                                                      
      1. Refer InterviewBit for understanding the concept of DP in the best manner possible. Also, solve all the questions from IB only (not leetcode) initially, bucket wise.
      (https://www.interviewbit.com/courses/programming/topics/dynamic-programming/)
      
      2. Question covered was Fibonacci Series using DP. 
      
         => M1: Recursive approach 
         
         int fibo(int n) {
            if (n <= 1) return n;
            return fibo(n - 1) + fibo(n - 2);
        }
        
        => M2: Memoization (Top to bottom approach)
        
        int memo[100] = {0};
        
        int fibo(int n) {
            if (n <= 1) return n;
            
            // If we have processed this function before, return the result from the last time. 
            if (memo[n] != 0) return memo[n]; 
            
            // Otherwise calculate the result and remember it. 
            memo[n] = fibo(n - 1) + fibo(n - 2);
            
            return memo[n];
        }
        
        => M3: Tabulation or DP (Bottom to Top approach)
        
        int fib(int n)
        {
            int a = 0, b = 1, c, i;
            if( n == 0)
                return a;
            for(i = 2; i <= n; i++)
            {
               c = a + b;
               a = b;
               b = c;
            }
            return b;
        }
