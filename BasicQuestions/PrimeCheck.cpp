#include <iostream>

using namespace std;

int main() {

  int num;
  bool flag = false;

  cout<<"Enter the number "<<endl;
  cin>>num;

  for(int i = 2; i<num;i++){
    if(num%i == 0){
      flag = true;
      break;
    }
  }

  if(flag) cout<<"Given number is not a prime number "<<endl;
  else cout<<"Given number is a prime number "<<endl;

  return 0;
}
