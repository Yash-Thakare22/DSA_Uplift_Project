#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    if((x^y)<0)
        cout<<"Different signs";

    else 
        cout<<"Same signs";
}
