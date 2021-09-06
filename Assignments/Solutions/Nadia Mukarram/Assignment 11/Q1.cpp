class Solution
{
    public:
    //Function to check if the number is sparse or not.
    bool isSparse(int n)
    {
        if(n&(n>>1)){
            return false;
        }
        // Your code
        return true;
    }
};
