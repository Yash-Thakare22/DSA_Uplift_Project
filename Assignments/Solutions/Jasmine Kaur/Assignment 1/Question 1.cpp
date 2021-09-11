#include <iostream>
using namespace std;
int main()
{
    int i,j;
    //for rows
    for(i=0;i<5;i++)
    {    
        //for spaces
        for(j=5-i;j>0;j--)
        {
            cout<<" ";
    }
    cout<<"*****"<<endl;
    }
    return 0;
}
