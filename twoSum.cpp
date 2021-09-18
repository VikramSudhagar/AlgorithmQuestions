#include <iostream>
#include <vector>
#include <iterator>
#include <map>

using namespace std; 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int, int> twoSum; 
        vector<int> ans;
        
        for(int i = 0; i < nums.size(); i++){
            //value ---- key
            twoSum[nums[i]] = i;
        }
        
        int valueOne;
        int valueTwo;
        
        for(int j = 0; j < nums.size(); j++){
            
            int value = target - nums[j];
            
            if(twoSum[value] && twoSum[value] != j){
                valueOne = j; 
                valueTwo = twoSum[value];
                break;
            }
            
        }
        
        ans.push_back(valueOne);
        ans.push_back(valueTwo);
        
        
        return ans;
        
        
    }
};