/*Question 4
Given an integer x, write a function that multiplies x with 3.5 and returns the integer result. You are allowed to use only bitwise operator

I/P:
5 

O/P:
17
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n;cin>>n; 
	cout<<((n<<1)+n+(n>>1));
	return 0;
}