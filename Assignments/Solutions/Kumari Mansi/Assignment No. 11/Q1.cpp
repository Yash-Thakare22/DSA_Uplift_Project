// https://practice.geeksforgeeks.org/problems/number-is-sparse-or-not-1587115620/1/?track=DSASP-BitMagic&batchId=154#
class Solution
{
public:
    //Function to check if the number is sparse or not.
    bool isSparse(int n)
    {
        // Your code
        return !(n & (n >> 1));
    }
};