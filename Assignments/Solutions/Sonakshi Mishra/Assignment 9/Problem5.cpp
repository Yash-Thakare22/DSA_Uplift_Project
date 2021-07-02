class Solution
{
public:
    vector<int> decode(vector<int> &encoded, int first)
    {
        vector<int> soln{first};
        for (int x : encoded)
            soln.push_back(first ^= x);
        return soln;
    }
};
