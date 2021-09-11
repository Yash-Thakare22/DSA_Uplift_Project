#include<bits/stdc++.h>
using namespace std;
void solve(vector<char> str1,vector<char> str2)
{   
    int a = 0; 
    for(a = 0; str2[a] != '\0'; a++);{
    int i,j;
    for(i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++){
        if(str1[i] == str2[j]) j++;
        else j = 0;
    }
    if(j == a)
        cout<< i - j + 1<<endl;
    else
        cout<<-1<<endl;
}
int main( )
{
    string s;
    cin>>s;
    vector<char> c1(s.begin(), s.end());
    cin>>s;
    vector<char> c2(s.begin(), s.end());
    solve(c1,c2);
    return 0;
}
