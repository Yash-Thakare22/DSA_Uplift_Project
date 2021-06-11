#include <iostream>
using namespace std;

int main() {
  long long n;
  cin>>n;
   for(int i=0;i<n;i++){
        for(int j=0;j<2*n-1;j++){
            if(j<=i)
            cout<<j+1<<" ";
             if(j>i&&j<(2*n)-2-i){
                cout<<" "<<" ";
            }
            if((j>=(2*n)-2-i)&&(j!=n-1))
            {
                cout<<(2*n-1)-j<<" ";
            }
           
            
        }cout<<endl;
   }
 
 	return 0;
}