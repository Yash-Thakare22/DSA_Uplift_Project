#include <iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter the number of rows\n";
    cin>>n;


  for(i=1; i<=n; i++){
    for(j=i; j<=n; j++){
     cout<<"*";
  }

  for(j=1; j<=(2*i-2); j++){
     cout<<" ";
  }

  for(j=i; j<=n; j++){
     cout<<"*";
  }
  cout<<endl;
}
 
  for(i=1; i<=n; i++){
    for(j=1; j<=i; j++){
     cout<<"*";
  }

  for(j=(2*i-2); j<(2*n-2); j++){
     cout<<" ";
  }
  for(j=1; j<=i; j++){
     cout<<"*";
  }
  cout<<endl;
  }
}

