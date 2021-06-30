#include <iostream>

using namespace std;

int main()
{   string s1;
  int n1;
    cout<< " enter string ";
    getline(cin,s1);
    n1=s1.size();
    int j,k=0;
    for ( int i=0; i<n1;i++)
    {
        for ( j=0; j<i;j++)
        {
            if(s1[i]==s1[j])
                break;

        }
        if(j==i)
            s1[k++]=s1[i];

    }
    cout<<s1;
    return 0;
}
