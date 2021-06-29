#include <iostream>

using namespace std;
bool getbit(int x,int y){
    return((x^y)<0);
}
int main()
{
    int a ,b;
    cin>>a>>b;
    cout<<getbit(a,b);

    return 0;
}
