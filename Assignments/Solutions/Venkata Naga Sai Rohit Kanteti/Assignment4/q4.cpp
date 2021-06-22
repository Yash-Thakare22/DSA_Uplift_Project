#include<bits/stdc++.h>
using namespace std;
main()
{
    string str;
    cout<<"Enter your String:";
    getline(cin,str);
    int in=0,out=0,p=0;
    int len=0;
    char sub_str[100][100]={0};
    for(in=0;str[in]!='\0';in++)
    {
        len++;
    }
 
    while(str[p]!='\0')
    {
        out=0;
        while(str[p]!=' ' && str[p]!='\0')
        {
            sub_str[in][out]=str[p];
            p++;
            out++;
        }
        sub_str[in][out]='\0';
        in++;
        if(str[p]!='\0')
        {
            p++;
        }
    }
    cout<<"After reversing words:   ";
    for(out=in-1;out>=0;out--){
   cout<<sub_str[out]<<" ";
        }
}
