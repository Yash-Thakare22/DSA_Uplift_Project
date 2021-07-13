class Solution
{
    public:
    //Function to check if the given pattern exists in the given string or not.
    bool search(string pat, string txt) 
    { 
    	// Your code here
    	return (txt.find(pat) == -1)? 0:1;
    	
    } 
};
