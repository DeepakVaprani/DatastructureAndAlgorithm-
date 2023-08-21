#include <iostream>
using namespace std;

int main() {
  int size;
  cout<<"Please enter the size of the square"<<endl;
  cin>>size;

  for(int i=0;i<size;i++){
    cout<<"* ";
    for(int j=0;j<size-2;j++){
      if(i == 0 || i == size-1) cout<<"* ";
      else cout<<"  ";
    }
    cout<<"* "<<endl;
  }
  return 0;
}