#include <iostream>
using namespace std;

int main() {
  int size;
  cout<<"Please enter the size of the solid half diamond"<<endl;
  cin>>size;
  int count =0;
  for(int i=0;i<size;i++){  
    for(int j=0;j<=i;j++){
       cout<<"* ";
    } 
    cout<<endl;
  }

   for(int i=0;i<size;i++){
    for(int j=size-2;j>=i;j--){
      cout<<"* ";
    }
    cout<<endl;
  }


  
  return 0;
}
