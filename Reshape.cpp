#include <iostream>
#include <vector>
using namespace std; 

//Initialization of a double vector array in c++ : https://www.techiedelight.com/initialize-two-dimensional-vector-cpp/

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        vector<vector<int>> newMat(r, vector<int>(c,0)); 
        
        int rows = mat.size();
        int columns = mat[0].size();
        
        int cCounter = 0;       //column counter
        int rCounter = 0;       //row counter
        
        if((rows*columns) != (r*c)){
            return mat;
        }
        
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < columns; j++){
                
                newMat[rCounter][cCounter] = mat[i][j];
                
                cCounter++;
                if(cCounter == c){
                    rCounter++;
                    cCounter = 0;
                }
                
            }
        }
        
        return newMat;
        
    }
};