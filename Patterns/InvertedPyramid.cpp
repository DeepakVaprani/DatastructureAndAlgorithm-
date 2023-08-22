#include <iostream>
using namespace std;

int main() {
  int size;
  cout<<"Please enter the size of the full pyramid"<<endl;
  cin>>size;

  for(int i=0;i<size;i++){

    for(int j=0;j<size;j++){
      if(i<=j) cout<<"* ";
      else cout<<" ";
    }
    cout<<endl;
  }
  return 0;
}