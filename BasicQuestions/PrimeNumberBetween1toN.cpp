#include <iostream>

using namespace std;

int main() {

  int num;
  bool flag = true;

  cout<<"Enter the number "<<endl;
  cin>>num;

  cout<<"Prime number between 1 to "<<num<<" are: ";
  for(int i = 2; i<num;i++){
    for(int j = 2; j<i;j++){
    if(i%j == 0){
      flag = false;
      break;
    }
  }

  if(flag) cout<<i<<" ";
  flag = true;
  }
  

  

  return 0;
}
