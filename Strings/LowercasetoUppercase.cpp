#include <iostream>
using namespace std;

int main() {

  char ch[100];
  int i=0,j=0,flag=0;

  cout << "Enter the string " << endl;
  cin>>ch;

  while(ch[i]!='\0'){
    ch[i]=ch[i]-'a'+'A';
    i++;
  }

  cout<<"Uppercase String is "<<ch<<endl;

  return 0;
}