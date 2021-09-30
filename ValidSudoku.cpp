#include <iostream>
#include <map>
#include <vector>

using namespace std; 

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        //the [] besides the variable name indicates that there will be nine maps
        //of that variable. For example row[1] and row[2] are two different hashmaps
        //holding different values

        map <int, int> row[9];
        map <int, int> col[9];
        map <int, int> subBox[9]; 
        
        
        for(int i = 0; i < board.size(); i++){  //board.size() determines how many rows there are
            
            for(int j = 0; j < board[0].size(); j++){
                
                char curr = board[i][j];
                
                //rows
                if(curr != '.' && row[i][curr]++ > 0){
                    return false;
                }
                
                //columns
                if(curr != '.' && col[j][curr]++ > 0){
                    return false;
                }
                
                //sub boxes
                
                if(curr != '.' && subBox[(i/3)*3 + (j/3)][curr]++ > 0){
                    return false;
                }
                

            }
            
        }
        
        return true;
        
        
    }
};