// Q6: https://leetcode.com/problems/backspace-string-compare/
stack<char> s1;
stack<char> s2;
for (int i = 0; i < s.length(); i++)
{
    if (s[i] != '#')
    {
        s1.push(s[i]);
    }
    else
    {
        if (!s1.empty())
            s1.pop();
    }
}
for (int i = 0; i < t.length(); i++)
{
    if (t[i] != '#')
    {
        s2.push(t[i]);
    }
    else
    {
        if (!s2.empty())
            s2.pop();
    }
}
if (s1 == s2)
    return true;
return false;