#include <iostream>
#include <vector>
#include <climits>

using namespace std;


int main() {

  int rows,column,min=INT_MAX, max=INT_MIN;
  vector<vector<int>>v;
  vector<vector<int>>v1;


  cout << "Enter the number of rows of the matrix" << endl;

  cin>>rows;

  cout << "Enter the number of columns of the matrix" << endl;
  cin>>column;

   v.resize(rows, vector<int>(column));
   v1.resize(rows, vector<int>(column));

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
       v1[i][j]=v[j][i];
    }
  }

  cout<<"Matrix after transpose"<<endl;

  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<column;j++)
    {
       cout<<v1[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
}