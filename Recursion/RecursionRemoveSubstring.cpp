#include <iostream>
#include <string>
using namespace std;

void removeOcc(string &s, string &s1){

  int found = s.find(s1);
  if(found != string::npos){
    string leftPart = s.substr(0,found);
    string rightPart = s.substr(found+s1.size(),s.size());
    s= leftPart+rightPart;

    removeOcc(s,s1);
  }
  else{
    cout<<s;
    return;
  }
}

int main() {
  string s,s1;

  cout<<"Enter the string"<<endl;

  cin>>s;

  cout<<"Enter the substring"<<endl;
  cin>>s1;

  removeOcc(s,s1);

  return 0;
}