#include <iostream>
using namespace std;

int main() {

  char ch[100];
  int i=0;

  cout << "Enter the string " << endl;
  cin.getline(ch,100);

  while(ch[i]!='\0'){
    if(ch[i] == ' ')ch[i]='@';
    i++;
  }

  cout<<"String after modification is "<<ch<<endl;
  return 0;
}