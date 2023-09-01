#include <iostream>
#include <vector>
#include <climits>

using namespace std;


int main() {

  vector<int>v;
  int key,size,j,i,mid,flag;

  cout<<"Enter the size of the array"<<endl;
  cin>>size;

  v.resize(size);

  for(int i=0;i<size;i++) cin>>v[i];

  cout<<"Enter the key to be searched"<<endl;
  cin>>key;

  i=0,j=size-1;

  while(i<=j){

    mid = i + (j-i)/2;

    if(v[mid]==key){
      flag =1;
      break;
    }

    else if(v[mid]<key) i=mid +1;
    else  j=mid-1;

  }
  if(flag)
  cout<<"Key is present at the positon "<<mid+1<<endl;
  else cout<<"Key is not present in the given array";
  
 


  return 0;
}