#include <bits/stdc++.h>
using namespace std;
#define ASCII_SIZE 256
 
char *RemoveChar(char *string1, char *string2)
{
  int *count = (int *)malloc(sizeof(int)*ASCII_SIZE);
  for(int i = 0; *(string2+i);  i++)
  {
      count[*(string2+i)]++;
  }
  int i  = 0, j = 0;
  while(*(string1 + i))
  {
    char temp = *(string1 + i);
    if(count[temp] == 0)
    {
        *(string1 + j) = *(string1 + i);
        j++;
    }
    i++;
  }    
  *(string1+j) = '\0';    
 
  return string1;
}
int main()
{

    char string1[100];
    char string2[100];
    cin>>string1>>string2;
   
    cout<<"given strings:\n";
    cout<<"string1: ";
    for (int i = 0; i < strlen(string1); ++i)
    {
      cout<<string1[i];
    }
    cout<<"\nstring2: ";
    for (int i = 0; i < strlen(string2); ++i)
    {
      cout<<string2[i];
    }
    cout<<"\nOutput: ";
    cout<<RemoveChar(string1, string2);
    return 0;
}
