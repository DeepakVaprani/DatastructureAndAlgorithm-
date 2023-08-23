#include <iostream>
using namespace std;

int main() {
  int size;
  cout<<"Please enter the size of the Inverted numeric Half pyramid"<<endl;
  cin>>size;


  for(int i=size;i>=0;i--){
    for(int j=0;j<i;j++){
      cout<<j+1<<" ";
    }
    cout<<endl;
  }
  return 0;
}