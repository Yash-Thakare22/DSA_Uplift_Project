class Solution
{
  public:
string triDownwards(string s) 
 {
        // code here
    string r; char a='.';
    for(int i=0;i<s.size();i++)
    {
     for(int j=0;j<i;j++)
     {
      r.push_back(a);  
     }
     for(int k=i;k<s.size();k++)
     {
       r.push_back(s[k]); 
     }
    }
    return r;
}
};
