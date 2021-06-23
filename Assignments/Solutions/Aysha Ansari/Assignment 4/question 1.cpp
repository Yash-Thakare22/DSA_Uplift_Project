#include <iostream>
using namespace std;
int main() {
    string s1,s2,temp;
    cout<<"enter s1: ";
    getline(cin,s1);
    cout<<"enter s2: ";
    getline(cin,s2);
    cout<<endl<<"after swapping: "<<endl;
    temp=s1;s1=s2;s2=temp;
    cout<<"s1="<<s1<<" "<<"s2="<<s2;
    return 0;
}
