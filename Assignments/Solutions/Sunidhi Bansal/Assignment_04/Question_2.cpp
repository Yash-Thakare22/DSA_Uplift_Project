
#include <iostream>

using namespace std;

int main()
{
    string str;
    cin>>str;
    
    for(int i=0;i<str.length();i++)
    {
        int temp=str[i];
        for(int j=i+1;j<str.length();j++)
        {
            if(str[i]==str[j])
            {
                str.erase(j,1);
            }
        }
    }
    cout<<str<<endl;
    return 0;
}

