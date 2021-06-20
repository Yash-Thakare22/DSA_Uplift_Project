#include <iostream>

using namespace std;

int main()
{
   cout<<endl;
  for(int r=1;r<=3;r++)
  {
      for(int c=1;c<=3-r;c++)
      {
          cout<<"  ";
      }
      for(int c=1;c<=r;c++)
      {
          cout<<" * ";
      }
      cout<<endl<<endl;
  }
   for(int r=1;r<=2;r++)
   {
       for(int c=1;c<=r;c++)
       {
           cout<<"  ";
       }
       for(int c=2;c>=r;c--)
       {
           cout<<" * ";
       }
       cout<<endl<<endl;
   }
    return 0;
}
