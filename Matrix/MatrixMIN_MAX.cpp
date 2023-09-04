#include <iostream>
#include <vector>
#include <climits>

using namespace std;


int main() {

  int rows,column,min=INT_MAX, max=INT_MIN;
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
        if(min>v[i][j])
        {
          min=v[i][j];
        }
        if(max<v[i][j]){
          max=v[i][j];
        }
    }
  }

  cout<<"Minimum element in the matrix is "<<min<<endl;
  cout<<"Maximum element in the matrix is "<<max<<endl;
  return 0;
}