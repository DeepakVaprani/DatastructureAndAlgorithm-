#include <iostream>
using namespace std;

int main() {
  int size;
  cout<<"Please enter the size of the inverted Half pyramid"<<endl;
  cin>>size;


  for(int i=size-1;i>=0;i--){
    for(int j=0;j<=i;j++){
      cout<<"* ";
    }
    cout<<endl;
  }
  return 0;
}