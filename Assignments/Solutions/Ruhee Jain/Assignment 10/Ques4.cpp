/*

Question 4

https://www.geeksforgeeks.org/decimal-binary-number-using-recursion/

*/

#include <iostream>
using namespace std;

int dectobinary(int n){
    if(n==0){
        return 0;
    }
    return n%2 + 10 * dectobinary(n/2);
}
int main() {
	int n;
	cin>>n;
	cout<<dectobinary(n);
}
