class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
       string ans;
        int i,j;
        for(i=0;i<indices.size();i++)
        {
            for(j=0;j<indices.size();j++)
            {if(indices[j]==i)
             ans+=s[j];}
        }
        return ans;
    }
};
