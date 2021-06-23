
#include <iostream>

using namespace std;

int main()
{
    int length;
    cin>>length;
    
    int array[length];
    for(int i = 0;i < length; i++) {
        cin>>array[i];
    }

    for(int i = 0;i < length - 1; i++) {
        for(int j = 0;j < length - 1 -i; j++) {
            if(array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array [j+1];
                array[j + 1] = temp;
            }
        }
    }
    
    for(int i = 0;i < length; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}



