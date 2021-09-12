class Solution
{
    public:
    
    bool isSparse(int n)
    {
        return !(n&(n>>1));
    }
};
