#include <iostream>
#include <string>
using namespace std;

void isPalindrome(string &s,int i,int j){
  if(i>=j){
    cout<<"Given String is a Palindrome"<<endl;
    return;
  }

  if(s[i]!=s[j]){
    cout<<"Given String is not a Palindrome"<<endl;
    return;
  }

  isPalindrome(s,i+1,j-1);
}

int main() {
  string s;
  cout<<"Enter the string "<<endl;
  cin>>s;
  isPalindrome(s,0,s.length()-1);
  return 0;
}