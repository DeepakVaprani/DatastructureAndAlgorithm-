#include <iostream>
using namespace std;

int main() {
  int size;
  cout<<"Please enter the size of the hollow square"<<endl;
  cin>>size;

  for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
      if(i == 0 || i == size-1 || j==0 || j== size-1) cout<<"* ";
      else cout<<"  ";
    }
    cout<<endl;
  }
  return 0;
}