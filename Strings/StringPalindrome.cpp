#include <iostream>
using namespace std;

int main() {

  char ch[100];
  int i=0,j=0,flag=0;

  cout << "Enter the string " << endl;
  cin>>ch;

  while(ch[j]!='\0'){
    j++;
  }

  j=j-1;
  while(i<j){
    if(ch[i]!=ch[j]) {
      flag=1;
      break;
    }
    i++;
    j--;
  }

  if(flag) cout<<"String is not a palindrome"<<endl;
  else cout<<"String is a palindrome"<<endl;

  return 0;
}