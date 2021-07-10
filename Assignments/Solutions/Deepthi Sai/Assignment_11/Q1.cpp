class Solution
{
    public:
    //Function to check if the number is sparse or not.
    bool isSparse(int n)
    {
      int result=n&(n>>1);
      return (result==0)?1:0;
    }
};
