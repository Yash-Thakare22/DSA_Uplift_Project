#include <iostream>

using namespace std;

int first_occurence(int num)
{
    int count = 1;
    while(num)
    {
        if((num & 1) == 0)
        {
            count++;
            num = num >> 1;
        }
        else
        {
            break;
        }
    }
    return count;
}

int main()
{
    int num;
    cin>>num;
    int position = first_occurence(num);
    cout<<position;
    return 0;
}
