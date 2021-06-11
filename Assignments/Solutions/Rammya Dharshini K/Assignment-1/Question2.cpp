/* Program to print the below Pattern 
  
  * * * * * * * * * *
  * * * *     * * * *
  * * *         * * *
  * *             * *
  *                 *
  *                 *
  * *             * *
  * * *         * * *
  * * * *     * * * *
  * * * * * * * * * *      */
  
#include<iostream>

using namespace std;

int main(){
	int n,j,i;
	cin >> n;
	for(i=1;i<=n;i++){
		for(j=n;j>=i;j--)
			cout << "* ";
		
		for(j=1;j<2*i-1;j++)
			cout << " ";
			
		for(j=1;j<2*i-1;j++)
			cout << " ";	
			
		for(j=n;j>=i;j--)
			cout << "* ";
			
		cout << endl;
	}
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++)
			cout << "* ";
		
		for(j=2*(n-i);j>=1;j--)
			cout << " ";	
				
		for(j=2*(n-i);j>=1;j--)
			cout << " ";	
		
		for(j=1;j<=i;j++)
			cout << "* ";
			
		cout << endl;
	}	
	return 0;
}  
