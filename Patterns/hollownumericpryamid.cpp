#include <iostream>
using namespace std;

int main() {

  int n;
  cout<<"Enter the size of hollow numeric pryamid"<<endl;
  cin>>n;
  
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      if(i==j || j==0 ||  i==n-1) cout<<j+1<<" ";
      else cout<<"  ";
    }
    cout<<endl;
  }
  return 0;
}