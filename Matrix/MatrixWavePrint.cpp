#include <iostream>
#include<vector>
using namespace std;

int main() {
  
  vector<vector<int>>v;
  int row, colm;

  cout<<"Enter the number of rows in the matrix"<<endl;

  cin>>row;
  
  cout<<"Enter the number of columns in the matrix"<<endl;

  cin>>colm;

  v.resize(row, vector<int>(colm));

  cout<<"Enter the element of the matrix"<<endl;
  for(int i=0;i<row;i++){
    for(int j=0;j<colm;j++){
      cin>>v[i][j];
    }
  }

  for(int j=0;j<colm;j++){
    //even no of colm - top to bottom
   
    if((j & 1) == 0) {
      for(int i=0;i<row;i++) cout<<v[i][j]<<" ";
    }
    else{
      for(int i=row-1;i>=0;i--) cout<<v[i][j]<<" ";
    }

  }

  return 0;
}
