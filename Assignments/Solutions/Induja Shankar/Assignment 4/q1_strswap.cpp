#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str1[10], str2[10], temp[10];
    cin >> str1 >> str2;
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
    
    cout << "str1= " << str1 << endl;
    cout << "str2= " << str2 << endl;
	
	return 0;
}
