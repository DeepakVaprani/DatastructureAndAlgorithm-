#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

  vector<vector<int>>v;
  int row,colm,key,i,j,mid,rowindex,colindex,flag;

  cout<<"Enter the number of rows"<<endl;
  cin>>row;
  cout<<"Enter the number of columns"<<endl;
  cin>>colm;

  cout<<"Enter the number of matrix"<<endl;
  v.resize(row,vector<int>(colm));

  for(int i=0;i<row;i++){
    for(int j=0;j<colm;j++){
      cin>>v[i][j];
    }
  }
  cout<<"Enter the number of key"<<endl;
  cin>>key;
  

  i=0;j=row*colm -1 ;



  while (i <= j) {
    mid = i + (j - i) / 2;

    rowindex=mid/colm;
    colindex = mid%colm;

    if (v[rowindex][colindex]==key){
      flag =1;
      break;
    }
      
    else if (v[rowindex][colindex]<key)
     i = mid+1; 
      
    else {
      j=mid-1;
    }
  }

  if(flag==1) cout<<"Element found at row "<<rowindex+1<<" and colm "<<colindex + 1<<endl;
  else cout<<"Element not present in the matrix";

  return 0;
}
