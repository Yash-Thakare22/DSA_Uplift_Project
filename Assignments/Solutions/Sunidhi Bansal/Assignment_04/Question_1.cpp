
#include <iostream>

using namespace std;

int main()
{
    string str_1="C++";
    string str_2="Java";
    
    string temp=str_1;
    str_1=str_2;
    str_2=temp;
    
    cout<<"after swapping "<<endl;
    cout<<"str_1 "<<str_1<<endl;
    cout<<"str_2 "<<str_2<<endl;

    return 0;
}






