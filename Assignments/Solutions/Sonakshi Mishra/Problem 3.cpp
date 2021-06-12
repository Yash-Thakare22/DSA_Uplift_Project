/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;


int main()
{
	int num=1;
	for (int i=1;i<=4;i++)
	 {
	     for(int j=0;j<=i-1;j++)
	          { cout<<num<<" ";
	               num++;
	               
	          }
	          cout<<"\n";
	 }

	     
	return 0;
}

