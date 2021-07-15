//https://www.geeksforgeeks.org/recursive-program-prime-number/

#include<iostream>

using namespace std;


bool isPrime(int x, int i = 2) {
	if(x <= 2) {
		if(x == 2) {
			return true;
		}
		else {
			return false;
		}
	}
	if(x % i == 0) {
		return false;
	}
	if(i * i > x) {
	    return true;
    }
    isPrime(x, i + 1);
}

int main() {
	int n;
	cout << "Enter a number:" << "\n";
	cin >> n;
	cout << isPrime(n, 2);
	cout << "\n";
	return 0;
}
