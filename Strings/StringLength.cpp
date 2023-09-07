#include <iostream>
using namespace std;

int main() {

  char ch[100];
  int i=0;

  cout << "Enter the string " << endl;
  cin>>ch;

  while(ch[i]!='\0'){
    i++;
  }

  cout<<"Length of the string is "<<i<<endl;
  return 0;
}