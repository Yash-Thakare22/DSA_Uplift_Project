// https://practice.geeksforgeeks.org/problems/distinct-pattern-search-1587115620/1/?track=DSASP-Strings&batchId=154#
class Solution
{
public:
    //Function to check if the given pattern exists in the given string or not.
    bool search(string pat, string txt)
    {
        // Your code here
        return (txt.find(pat) == -1) ? 0 : 1;
    }
};