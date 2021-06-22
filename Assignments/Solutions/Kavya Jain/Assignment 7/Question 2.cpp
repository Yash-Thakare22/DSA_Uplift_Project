#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if (((x ^ y) < 0) == 1)
       printf ("True");
    else
      printf ("False");
    return 0;
}
