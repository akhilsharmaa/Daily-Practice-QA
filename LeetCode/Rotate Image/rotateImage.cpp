#include <bits/stdc++.h>
using namespace std;

// ACCEPTED :) 
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int n = matrix.size();

        for (int i = 0; i < n; i++)
            for (int j = 0; j < i; j++)        
                // SWAP THE NODES 
                swap(matrix[i][j], matrix[j][i]);
           
    
        for (int i = 0; i < n; i++)
            reverse(matrix[i].begin(),matrix[i].end());
        
    }
};

  /* 
 __________________________________________
 |                                        |
 |  If this code helps you ;)             |
 |                                        |
 |  Please give a STAR                    |
 |  & FOLLOW_ME on Github                 |
 |                                        |
 |  ID - @akhilsharmaa                    |
 |                                        |
 |  C++ CODE BY AKHILESH                  |
 |________________________________________|
 */

int main(){
   

   return 0;
}