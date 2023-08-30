#include <iostream>
#include <vector>
#include <climits>

using namespace std;


int main() {

  vector<int>v;
  int key,size,flag,i;

  cout<<"Enter the size of the array"<<endl;
  cin>>size;

  v.resize(size);
  
  for(int i=0;i<size;i++) cin>>v[i];

  cout<<"Enter the key to be searched"<<endl;
  cin>>key;

  for(i=0;i<size;i++){
    if(key==v[i]){
      flag=1;
      break;
    }
  }

  if(flag==1) cout<<"Key is present at the positon "<<i+1;
  else cout<<"Key is not present in the array";


  return 0;
}