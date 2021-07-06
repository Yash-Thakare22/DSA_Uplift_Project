#include <iostream>

using namespace std;

int select(int i,int n) {
    if(n == 2) {
        return 0;
    }
    
    else if(n % i == 0) {
        return 1;
    }
    else if (i == n / 2) {
        return 0;
    }
    
    return select(i + 1,n);
}

bool is_prime(int n) {
    int i = 2;
    if(select(i,n)) {
        return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    cout<<"Is "<<n<<" Prime ? ";
    if(is_prime(n)) {
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }

    return 0;
}





