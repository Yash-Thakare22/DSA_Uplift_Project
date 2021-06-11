/*Program to print the below pattern
         * * * * *
       * * * * *
     * * * * *
   * * * * *
 * * * * *  */

#include<iostream>

using namespace std;

int main(){
	int i,n;
	cin >> n;
	for(i=1;i<=n;i++){
		cout << string(n-i,' ');
		cout << string(n,'*') << endl;
	}
	return 0;
}
