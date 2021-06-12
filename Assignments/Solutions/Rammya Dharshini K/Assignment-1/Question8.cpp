/* Program to print the following pattern

* * * * *
 * * * *
  * * *
   * *
    *         */
   
#include<iostream>

using namespace std;

int main(){
	int n,i,j;
	cin >> n;	
	
	for(i=0;i<=n;i++){
		for(j=1;j<=i;j++)
			cout << " ";
		for(j=n-i+1;j>1;j--)
			cout << "* ";
	

		cout << endl;
	}
	return 0;
}
