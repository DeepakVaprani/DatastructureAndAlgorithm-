#include <iostream>
#include <vector>
#include <climits>

using namespace std;


int main() {

  vector<int>v;
  int key,size,j,i;

  cout<<"Enter the size of the array"<<endl;
  cin>>size;

  v.resize(size);

  for(int i=0;i<size;i++) cin>>v[i];

  cout<<"Enter the key to be searched"<<endl;
  cin>>key;

  for(i=0;i<size;i++){
    if(key==v[i]){
      break;
    }
  }

  for(j=size-1;j>0;j--){
    if(key==v[j]){
      break;
    }
  }
  cout<<"Key's first occurrence is present at the positon "<<i+1<<endl;
  cout<<"Key's last occurrence is present at the positon "<<j+1<<endl;
 


  return 0;
}