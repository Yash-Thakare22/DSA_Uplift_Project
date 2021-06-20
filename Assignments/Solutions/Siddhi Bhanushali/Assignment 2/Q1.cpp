#include <iostream>
using namespace std;
void sortArray(int a[],int n){
  for(int i=0;i<n;i++){
    int min=i;
    for(int j=i;j<n;j++){
      if(a[j]<a[min]){
        min=j;
      }
    }
      swap(a[i],a[min]);
    
  }
  
}

int main() {
  int n;
  int a[100];
  cout<<"size";
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sortArray(a,n);
  for(int i=0;i<n;i++){
    cout<<a[i];
  }
}