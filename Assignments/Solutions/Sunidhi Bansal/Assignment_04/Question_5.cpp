#include <iostream>

using namespace std;

bool is_anagram(string s,string p);

int main()
{
    string s,p;
    cout<<"Enter first string : "<<endl;
    cin>>s;
    cout<<"Enter second string : "<<endl;
    cin>>p;
    
    if(is_anagram(s,p))
    {
        cout<<"Yes. Two strings are anagram of each other."<<endl;
    }
    else 
    {
        cout<<"No. Two strings are not anagram of each other."<<endl;
    }
    return 0;
}

bool is_anagram(string s,string p)
{
    if(s.length()!=p.length())
    {
        return false;
    }
    else
    {   
        for(int i=0;i<s.length();i++)
        {
            int temp = s[i];
            int count_frequency_in_s=0;
            int count_frequency_in_p=0;
            for(int k=0;k<s.length();k++)
            {
                if(temp==s[k])
                {
                    count_frequency_in_s++;
                }
            }
            for(int j=0;j<p.length();j++)
            {
                if(temp == p[j])
                {
                    count_frequency_in_p++;
                }
            }
            if(count_frequency_in_s != count_frequency_in_p)
            {
                return false;
            }
        }
        return true;
    }
}



