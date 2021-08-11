class Solution
{
public:
    int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
    {
       
        int index = 0;
        int soln=0;
        if (ruleKey == "color")
            index = 1;
        else if (ruleKey == "name")
            index = 2;

        for (auto it : items)
        {
            if (it[index] == ruleValue)
                soln++;
        }

        return soln;
    }
};
