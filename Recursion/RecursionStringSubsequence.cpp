#include <iostream>
#include <string>

using namespace std;

void printSubsequence(string str, string output, int i) {

  if(i==str.length()){
    cout<<output<<endl;
    return;
  }

  //exclude 

  printSubsequence(str,output,i+1);

  //include

  output.push_back(str[i]);
  printSubsequence(str,output,i+1);
    
}

int main() {
    
    string s;
    string output;
    
    cout <<  "Enter the string" << endl;
    cin >> s;
    
    int i=0;

    printSubsequence(s,output,i);
    
    return 0;
}
