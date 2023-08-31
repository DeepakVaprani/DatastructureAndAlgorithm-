#include <iostream>
#include <vector>
#include <climits>

using namespace std;


int main() {

  vector<int>v;
  int key,size,j,i,mid,pos;

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
      pos = mid;
      i=mid+1;
    }

    else if(v[mid]<key) i=mid +1;
    else  j=mid-1;

  }

  cout<<"Key's last occurrence is at the positon "<<pos+1<<endl;
 
  
 


  return 0;
}