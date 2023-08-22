#include <iostream>
using namespace std;

int main() {
  int size;
  cout<<"Please enter the size of the Half pyramid"<<endl;
  cin>>size;


  for(int i=0;i<size;i++){
    for(int j=0;j<=i;j++){
      cout<<"* ";
    }
    cout<<endl;
  }
  return 0;
}