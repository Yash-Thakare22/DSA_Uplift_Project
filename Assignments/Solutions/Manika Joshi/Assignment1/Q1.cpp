#include <iostream>

using namespace std;

int main()
{
   // int flag = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (j + i < 4)
                cout << " ";

            else
            {
                cout << "*****";
                break;
            }
        }
        cout << endl;
    }
        return 0;
}
