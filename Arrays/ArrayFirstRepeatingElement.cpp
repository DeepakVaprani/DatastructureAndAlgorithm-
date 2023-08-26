#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
  int size,j=0;
  vector<int>a;
  unordered_map<int,int>hash;

  cout<<"Please enter the size of the array"<<endl;
  cin>>size;

  cout<<"Enter the elements of array"<<endl;

  a.resize(size);

  for(int i=0;i<size;i++){
    cin>>a[i];
  }

  for(int i=0;i<size;i++){
    hash[a[i]]++;
  }

  for(int i=0;i<size;i++){
    if(hash[a[i]]>1){
      cout<<"First repeating element is "<<a[i];
      break;
    }
  }


  return 0;
}
