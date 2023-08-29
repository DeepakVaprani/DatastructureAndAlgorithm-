#include <iostream>

using namespace std;

int main() {

  int num;

  cout<<"Enter the number "<<endl;
  cin>>num;

  if(num & 1) cout<<"Given number is odd";
  else cout<<"Given number is even";
  
  return 0;
}
