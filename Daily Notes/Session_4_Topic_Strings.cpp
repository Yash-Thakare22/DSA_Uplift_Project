Question 1:
String Basics(Input & Output)
Method 1:

#include <iostream>
using namespace std;

int main()
{
    char s[100];
    //cin>>s;
    cin.get(s,100);
    cout<<s;

    return 0;
}

Method 2:

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    //cin>>s;
    getline(cin,s);
    cout<<s;

    return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
Question 2:
Given a string,remove all spaces from it

#include <iostream>
#include <string>
using namespace std;

int main()
{
    char s[100];
    cin.get(s,100);
    int i=0,j=0;
    while(s[i])
    {
        if(s[i]!=' ')
            s[j++]=s[i];
        i++;
    }
    s[j]='\0';
    cout<<s;

    return 0;
}

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
Question 3:
Given a string, write program to check if it is palindrome or not
  
#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[100];
    cin.get(s,100);
    int n=strlen(s);
    int flag=1;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            flag=0;
            cout<<"No";
            break;
        }
    }
    if(flag==1)
    
        cout<<"yes";

    return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
Question 4:
Given a string, write program to find maximum occuring character in the input string

#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[100];
    cin.get(s,100);
    int n=strlen(s);
    
    int max=0;
    int count[256]={0};
    char res;
    for(int i=0;i<n;i++)
    {
        count[s[i]]++; 
        if(max<count[s[i]])
        {
            max=count[s[i]];
            res=s[i]; 
        }
    }
    cout<<res;

    return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
Question 5:
Given a string, write program to divide given string in N equal parts

#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[100];
    cin.get(s,100);
    int n;
    cin>>n;
    int len=strlen(s);
    if(len%n!=0)
    {
        cout<<"Invalid String length";
    }
    int equal_part=len/n;
    for(int i=0;i<len;i++)
    {
        if(i%equal_part==0)
        {
            cout<<" ";
        }
        cout<<s[i];
    }

    return 0;
}
