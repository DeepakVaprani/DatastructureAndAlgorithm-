#include <iostream>

using namespace std;

int main() {

  int num;


  cout<<"Enter the number "<<endl;
  cin>>num;
  int ans = num;
  while(--num){
    ans*=num;
  }
  
  cout<<"Factorial is "<<ans<<endl;
  return 0;
}
