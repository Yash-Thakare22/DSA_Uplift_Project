
#include <iostream>

using namespace std;

int main()
{
    string str_1,str_2;
    cout<<"Enter first string : "<<str_1<<endl;
    cin>>str_1;
    cout<<"Enter second string : "<<str_2<<endl;
    cin>>str_2;
    
    for(int i=0;i<str_2.length();i++)
    {
        int temp = str_2[i];
        for(int j=0;j<str_1.length();j++)
        {
            if(str_2[i] == str_1[j])
            {
                str_1.erase(j,1);
                j--;
            }
        }
    }

    cout<<str_1<<endl;
    return 0;
}

