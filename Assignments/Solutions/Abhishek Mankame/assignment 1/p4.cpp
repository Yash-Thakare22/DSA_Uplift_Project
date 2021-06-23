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
   for(int l=1;l<=2;l++)
   {
       for(int m=1;m<=l;m++)
       {
           cout<<"  ";
       }
       for(int n=2;n>=l;n--)
       {
           cout<<" * ";
       }
       cout<<endl<<endl;
   }
    return 0;
}
