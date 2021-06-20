
#include <iostream>

using namespace std;

int main()
{
    int length;
    cout<<"Enter the total number of elements :"<<endl;
    cin>>length;
    
    int arr[length];
    
    for(int i = 0;i < length; i++) {
        cin>>arr[i];
    }
    
    int min=0;
    int mark_point = 0;
    
    for(int i = 0;i < length; i++) {
        for(int j = i+1;j < length; j++) {
            if(arr[i]==arr[j]) {
                min=arr[i];
                mark_point = 1;
                break;
            }
        }
        if(mark_point == 1) {
            break;
        }
    }
    
    cout<<min<<endl;
    return 0;
}





