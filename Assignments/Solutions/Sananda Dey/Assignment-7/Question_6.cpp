#include <iostream>
using namespace std;

int main() {
	 int x;
  cin>>x;

  long long ctz=__builtin_ctz(x);

cout<<ctz+1;
	return 0;
}