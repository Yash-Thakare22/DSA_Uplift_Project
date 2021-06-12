
#include <iostream>

using namespace std;

int main()
{
    int length;
    cout<<"Enter the total numbers of elements: "<<endl;
    cin>>length;
    
    int arr[length];
    int count = 0;
    
    for(int i = 0;i < length; i++) {
        cin>>arr[i];
    }
    
    for(int k = 0;k < length; k++) {
        if(arr >= 0)
        {
            count++;
        }
    }
    
    for(int i = 0;i <= count - 1; i++) {
        for(int j = 1;j <= length - 1 -i; j++) {
            if(arr[j] < 0 && arr[j-1] >= 0) {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
    
    
    for(int i = 0;i < length; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}

