#include <iostream>
using namespace std;
void removeSpaces(char *str)
{

	int count = 0;


	for (int i = 0; str[i]; i++)
		if (str[i] != ' ')
			str[count++] = str[i];
	str[count] = '\0';
}


int main()
{
	char str[] = "P rakh ar Shre yash ";
	removeSpaces(str);
	cout << str;
	return 0;
}
