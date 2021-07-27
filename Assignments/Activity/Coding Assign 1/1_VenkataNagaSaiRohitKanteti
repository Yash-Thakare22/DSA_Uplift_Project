#include<bits/stdc++.h>

using namespace std;
//TC- O(n) where n is length of c1
// SC - O(1)

void solve(vector<char> str1,vector<char> str2)
{   
    int l = 0; 
    for(l = 0; str2[l] != '\0'; l++);
    
    int i,j;
    for(i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++)
    {
        if(str1[i] == str2[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if(j == l)
        cout<< i - j + 1<<endl;
    else
        cout<<-1<<endl;
	
}
int main( )
{
    
	string s;
    cout<<"Enter c1: ";
    cin>>s;
    vector<char> c1(s.begin(), s.end());
 
	
    cout<<"Enter c2: ";
    cin>>s;
    vector<char> c2(s.begin(), s.end());
 
   
    solve(c1,c2);
    
    return 0;
}
