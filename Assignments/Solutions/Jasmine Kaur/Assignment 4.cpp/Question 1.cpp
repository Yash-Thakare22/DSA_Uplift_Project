#include <iostream>
using namespace std;
int main(){
    string str1 = "C++",str2 = "Java";
    string s = str1;
    str1 = str2;
    str2 = s;
    cout<<"str1=" <<str1<<" , str2= "<<str2;
    return 0;
}
