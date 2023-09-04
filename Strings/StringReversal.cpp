#include <iostream>
using namespace std;

int main() {

  char ch[100];
  int i=0,j=0;

  cout << "Enter the string " << endl;
  cin>>ch;

  while(ch[j]!='\0'){
    j++;
  }

  j=j-1;
  while(i<=j){
    swap(ch[i],ch[j]);
    i++;
    j--;
  }


  cout<<"String after reversal is "<<ch<<endl;
  return 0;
}