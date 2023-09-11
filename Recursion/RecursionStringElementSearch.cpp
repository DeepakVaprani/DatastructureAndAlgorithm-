#include <iostream>

using namespace std;

bool findKey(string s,int n,int i,char key) {
    if (i==n) {
        return false; 
    }
   if(s[i]==key) {
    return true;
   }
    return findKey(s,n,i+1,key); 
}

int main() {
    string s;
    char key;
    cout << "Enter the string "<<endl;
    cin >> s;
    cout<<"Enter the key"<<endl;
    cin>>key;

    if(findKey(s,s.length(),0,key)){
      cout<<"key is present ";
    }
    else{
      cout<<"key is not present";
    }
    return 0;
}
