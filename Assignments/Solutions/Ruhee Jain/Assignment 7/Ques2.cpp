/*

Question 2
Given two i/p signed integers, write function that returns true if the signs of given integers are different, otherwise false

I/P:
-4 +5

O/P:
True


*/


#include<iostream>
using namespace std;
   
bool oppositeSigns(int x, int y)
{
    return ((x ^ y) < 0);
}
   
int main()
{
    int x,y;
    cin>>x;
    cin>>y;
    if (oppositeSigns(x, y))
       cout<<"True";
    else
      cout<<"False";
    return 0;
}
