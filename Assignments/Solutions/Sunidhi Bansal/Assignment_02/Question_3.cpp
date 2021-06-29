
#include <iostream>

using namespace std;

void shift_by_one(int t,int &y)
{
    y = t;
}

int main()
{
    int length;     
    cout<<"Enter the total number of elements: "<<endl;
    cin>>length;

    int a[length];
    
    for(int i = 0;i < length; i++) {
        cin>>a[i];
    }
    
    int temp = a[0];
    for(int i = 0;i < length-1; i++)
    {
        int temp_2 = a[i+1];
        shift_by_one(temp,a[i+1]);
        temp=temp_2;
    }
    a[0] = temp;
    
    for(int i = 0;i < length; i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}




