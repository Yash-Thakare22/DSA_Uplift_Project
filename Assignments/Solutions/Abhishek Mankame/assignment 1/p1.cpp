#include<iostream>
using namespace std;
int main()
{
	int i,j;
	cout<<endl;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=5;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
