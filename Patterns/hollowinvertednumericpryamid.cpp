#include <iostream>
using namespace std;

int main() {

  int n;
  cout<<"Enter the size of hollow inverted numeric pryamid"<<endl;
  cin>>n;
  
  for(int i=0;i<n;i++){
    for(int j=i+1;j<=n;j++){
      if(j==n|| j==i+1 ||  i==0) cout<<j<<" ";
      else cout<<"  ";
      
    }
    cout<<endl;
  }
  return 0;
}