#include <iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{   string s1,s2,result;
    cout << "string 1:";
    getline(cin,s1);
    cout << "string 2:";
    getline(cin,s2);
    int n1,n2;
    n1= s1.size();
    n2 = s2.size();
    int count[256]={0};
    for (int i=0; i<n2;i++)
    {
        count[s2[i]]++;
    }
    int i=0;
    while(i<n1)
    {
        char temp = s1[i];
        if(count[temp] == 0)
        {
            result.push_back(temp);
        }
        i++;
    }

    cout<< result;



    return 0;
}
