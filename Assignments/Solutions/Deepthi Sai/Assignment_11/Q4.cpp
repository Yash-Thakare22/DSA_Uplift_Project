class Solution
{
    public:
    bool search(string pat, string txt) 
    {
    	for(int i=0;i<txt.size()-pat.size()+1;i++)
    	{
    	   if(txt.substr(i,pat.size())==pat)
    	   return true;
    	}
    	return false;
    } 
};
