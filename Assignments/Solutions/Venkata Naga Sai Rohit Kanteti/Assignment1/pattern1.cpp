
/*

           *  *  *  *  *
        *  *  *  *  *
     *  *  *  *  *  
   *  *  *  *  *
*  *  *  *  *

*/



#include<bits/stdc++.h>
using namespace std;

int main()
{

	int n;
  cout<<"enter n";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <3*(n-i) ; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < n; k++)
			cout << " * ";
		cout << endl;
	}
}
