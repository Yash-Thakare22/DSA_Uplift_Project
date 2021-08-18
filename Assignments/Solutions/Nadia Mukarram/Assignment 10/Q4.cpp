#include <iostream>
using namespace std;
void DectoBin(int n){
    if(n==0){
        cout<<"0";
        return;
    }
    else
    DectoBin(n/2);
     cout<<n%2;
     return;
}

int main() {
    int n;
	cin>>n;
	DectoBin(n);
	return 0;
}
