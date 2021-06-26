
/*
Question 6
Write a one line function to return position of first 1 from right to left, in binary representation of an integer

I/P:
18 (010010)

O/P:
2
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
    cin>>n; 
    int k = (log2(n & -n));
	cout<<"ans "<<-(~k);
	return 0;
}
