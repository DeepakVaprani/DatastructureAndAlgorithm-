#include <iostream>
#include <string>
using namespace std;

void reverseString(string &s,int i,int j){
  if(i>=j){
    cout<<"String after reversal "<<s;
    return;
  }

  swap(s[i],s[j]);

  reverseString(s,i+1,j-1);
}

int main() {
  string s;
  cout<<"Enter the string "<<endl;
  cin>>s;
  reverseString(s,0,s.length()-1);
  return 0;
}