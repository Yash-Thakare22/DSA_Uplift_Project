#include <iostream>

using namespace std;

int main()
{
   cout<<endl;
  for(int i=1;i<=3;i++)
  {
      for(int k=2;k>=i;k--)
      {
          cout<<"  ";
      }
      for(int j=1;j<=i;j++)
      {
          cout<<" * ";
      }
      cout<<endl<<endl;
  }
   for(int r=1;r<=2;r++)
   {
       for(int y=1;y<=r;y++)
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



