#include <iostream>
#include <vector>
using namespace std;

int main() {
  int row,colm,totalElement,startingRow,endingRow,startingColm,endingColm;
  vector<vector<int>>v;


  cout << "Enter the number of rows of the matrix" << endl;

  cin>>row;

  cout<<"Enter the number of colm of the matrix"<<endl;
  cin>>colm;

  v.resize(row,vector<int>(colm));

  cout<<"Enter the elements of the array"<<endl;

  for(int i=0;i<row;i++)
  {
    for(int j=0;j<colm;j++){
      cin>>v[i][j];
    }
  }
  
  totalElement = row*colm;
  startingRow= 0;
  startingColm= 0;
  endingRow= row-1;
  endingColm= colm-1;

  int count =0;

  while(count<totalElement)
  {
    //print starting row
    for(int i=startingColm; i<=endingColm && count<totalElement; i++) {
      cout<<v[startingRow][i]<<" ";
      count++;
    }
    startingRow++;

    //print endingcol
    for(int i=startingRow; i<=endingRow && count<totalElement; i++) {
      cout<<v[i][endingColm]<<" ";
      count++;
    }
    endingColm--;

    //print endingrow
    for(int i=endingColm;i>=startingColm && count<totalElement;i--) {
      cout<<v[endingRow][i]<<" ";
      count++;
    }
    endingRow--;
    //print startingrow

     for(int i=endingRow;i>=startingRow && count<totalElement;i--) {
      cout<<v[i][startingColm]<<" ";
      count++;
    }
    startingColm++;

  }
  return 0;
}