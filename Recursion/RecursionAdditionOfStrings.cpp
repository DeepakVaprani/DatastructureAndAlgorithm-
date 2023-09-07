#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void addStrings(string &s,string &s1,string &ans,int i,int j,int carry){
  if(i<0 && j<0){
    if(carry) ans.push_back(carry+'0');
    return;
  }

  int num1 = (i>=0 ? s[i] : '0') -'0';
  int num2 = (j>=0 ? s1[j] : '0') -'0';
  int sum = num1+num2+carry;
  int digit = sum%10;
  carry=sum/10;

  ans.push_back(digit+'0');

  addStrings(s,s1,ans,i-1,j-1,carry);
  
}

int main() {
  string s,s1,ans;
  cout<<"Enter the first string "<<endl;
  cin>>s;

  cout<<"Enter the second string "<<endl;
  cin>>s1;

  addStrings(s,s1,ans,s.length()-1,s1.length()-1,0);

  reverse(ans.begin(),ans.end());

  cout<<ans<<endl;
  return 0;
}