#include <iostream>
#include <vector>
using namespace std;


int main() {

  int rows,column,a,flag=0,key,i,j;
  vector<vector<int>>v;

  cout << "Enter the number of rows of the matrix" << endl;

  cin>>rows;

  cout << "Enter the number of columns of the matrix" << endl;
  cin>>column;

   v.resize(rows, vector<int>(column));

   cout << "Enter the number to be searched" << endl;
  cin>>key;

  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<column;j++)
    {
        cin>>v[i][j];
    }
  }
  

  for(i=0;i<rows;i++)
  {
    for(j=0;j<column;j++)
    {
        if(key==v[i][j])
        {
          flag=1;
          break;
        }
    }
  }

  if(flag) cout<<"Key is present at row "<<i+1<<" column "<<j+1<<endl;
  else cout<<"Key is not present in the matrix" <<endl;
  return 0;
}