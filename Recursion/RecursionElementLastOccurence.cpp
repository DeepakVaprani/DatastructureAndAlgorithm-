#include <iostream>
#include <vector>
using namespace std;

int lastOccurence(vector<int>&v,int n,int key){
  if(n<0) return -1;

  if(v[n]==key) return n;

  lastOccurence(v,n-1,key);
}

int main() {
  int size,key,pos;
  vector<int>v;
  cout<<"Enter the size of the array"<<endl;
  cin>>size;
  cout<<"Enter the elements of the array"<<endl;
  v.resize(size);
  for(int i =0;i<size;i++) cin>>v[i];

  cout<<"Enter the key"<<endl;
  cin>>key;

  pos=lastOccurence(v,size-1,key);

  cout<<"Element found at the position "<<pos+1<<endl;
  return 0;
}