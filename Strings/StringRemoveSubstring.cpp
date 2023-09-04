#include <iostream>
#include <string>

using namespace std;

int main() {
 
  string s,s1;
  int pos;

  cout<<"Enter the string"<<endl;
  cin>>s;

  cout<<"Enter the substring"<<endl;
  cin>>s1;

  pos=s.find(s1);

  while(pos!=string::npos){
    s.erase(pos,s1.length());
    pos=s.find(s1);
  }

  cout<<"String after removing the substring "<<s<<endl;
  return 0;
}
