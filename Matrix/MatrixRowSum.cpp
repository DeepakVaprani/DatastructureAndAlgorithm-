#include <iostream>
#include <vector>
using namespace std;

//topHired 

int main() {

  int rows,column,a,sum=0;
  vector<vector<int>>v;

  cout << "Enter the number of rows of the matrix" << endl;

  cin>>rows;

  cout << "Enter the number of columns of the matrix" << endl;
  cin>>column;

   v.resize(rows, vector<int>(column));

  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<column;j++)
    {
        cin>>v[i][j];
    }
  }
  

  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<column;j++)
    {
        sum += v[i][j];
    }
    cout<<"Sum of the "<<i+1<<" row is "<<sum<<endl;
    sum=0;
  }
  return 0;
}