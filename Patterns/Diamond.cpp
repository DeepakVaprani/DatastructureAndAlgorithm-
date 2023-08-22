#include <iostream>
using namespace std;

int main() {
  int size;
  cout<<"Please enter the size of the diamond"<<endl;
  cin>>size;
  int count =0;
  for(int i=0;i<size;i++){  
    for(int j=0;j<size;j++){
      if(i>size-j-2) cout<<"* ";
      else cout<<" ";
    } 
    cout<<endl;
  }

 for(int i=0;i<size;i++){
    for(int j=size;j>0;j--){
      if(i<size-j) cout<<"* ";
      else cout<<" ";
    }
    cout<<endl;
  }
  
  return 0;
}
