/*

Question 4:Given a square matrix, rotate the matrix by 180 degree.
Input:
 
1   2   3   4
5   6   7   8
9   10  11  12
13  14  15  16
 
Output:
 
16  15  14  13
12  11  10  9
8   7   6   5
4   3   2   1


*/


#include<iostream>
using namespace std;

int
main ()
{
   int n=4;
  int a[][4]={{ 1,   2,   3,   4},
               {5,   6,   7,   8},
                {9,   10,  11,  12},
                { 13,  14,  15,  16}}, i, j;

  for (i = n-1; i >= 0; i--)
    {
      for (j = n-1; j >= 0; j--)
	{
	  cout << a[i][j] <<" ";
	}
      cout << endl;
    }
return 0;
}
