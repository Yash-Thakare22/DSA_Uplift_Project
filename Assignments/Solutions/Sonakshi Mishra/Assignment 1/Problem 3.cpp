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

