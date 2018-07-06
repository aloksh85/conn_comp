/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <unordered_map>

using namespace std;
#define DEBUG 1

// traverse the image or matrix row wise and mark neighbors and create equivalencies
// merge the equivalent sets
// return no. of connected components


void firstPass (vector<vector<int>>& img, unordered_map<int,vector<int>>&eq)
{
    for( int i = 0; i< img.size() ;++i) {
    }
    
    
}


void
findConComp (const vector < vector < int > >&inImage,
	     vector < vector < int > >&outImg)
{
    unordered_map<int,vector<int>> eq_map;
    outImg = inImage;
    
    firstPass(outImg,eq_map);

}

main ()
{
  int nrows, ncols;
  cin >> nrows;
  cin >> ncols;
  cout << "num rows: " << nrows << ", ncols: " << ncols << endl;
  vector < vector < int >>img;
  vector < int >row;

  string rowStr;
  while (getline (cin, rowStr))
    {
      //cout << "new row: " << rowStr << endl;
      istringstream ss (rowStr);
      string token;
      row.clear ();
      while (getline (ss, token, ','))
	{
	  row.push_back (stoi (token));
	}
      img.push_back (row);
    }
  cout << "Printing input matrix, n_rows: " << img.size () << 
            ", n_cols:" << img[0].size () << endl;

  //DEBUG-print the input matrix
  if (DEBUG)
    {
    for (row:img)
	{
	for (e:row)
	    {
	      cout << e << ",";
	    }
	  cout << endl;
	}

    }

  return 0;
}
