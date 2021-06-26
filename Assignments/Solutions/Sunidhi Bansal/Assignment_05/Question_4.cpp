
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    cin>>N;
    
    string str;
    cin>>str;

    int count[26]={0};
    
    for(int i = 0; i < str.length(); i++)
    {
            count[str[i] - 'a']++;
    }
    
    for(int i = 1; i < 26; i++)
    {
        count[i] += count[i - 1];
    }
   
   string sorted_str;
   
    for(int i = str.length() - 1; i >= 0; i--)
    {
      int pos = str[i] - 'a';
      int index = count[pos];
      sorted_str[index - 1] = str[i]; 
      count[pos]--;
    }
    
    for(int i = 0; i < str.length(); i++)
    {
        cout<<sorted_str[i];
    }
    
    return 0;
}



