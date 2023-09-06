#include <iostream>
#include <string>

using namespace std;

int main() {
 
  string s,s1;
  int i;

  cout<<"Enter the string"<<endl;
  cin>>s;

  for(i=0;i<s.length()-1;i++){
    if(s[i]!=s[i+1]) s1.push_back(s[i]);
  }
  s1.push_back(s[i]);

  cout<<"String after removing duplicate adjacent element "<<s1<<endl;
  return 0;
}
