class Solution
{
  public:
string oddEven(int N){
        // code here 
        if((N^1) == (N-1))
        return "odd";
        else return "even";
    }
};
