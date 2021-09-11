#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s,str="";
    vector<string> v;
    cout << "Enter string1";
    getline(cin, s);

    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=' ')
            {
                str += s[i];
                
            }
        else if(s[i]==' ')
        {
            v.push_back(str);
            str = "";
        }
    }
    v.push_back(str);

    for(int i=v.size()-1;i>=0;i--)
        cout<<v[i]<<" ";



    return 0;
}
