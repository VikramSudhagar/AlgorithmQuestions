#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int left = 0;
        int right = n-1;
        int x = n-1;
        
        for(int i = n-1; i >= 0; i--){
            if(abs(nums[right]) > abs(nums[left])){
                x = nums[right--];
            } else {
                x = nums[left++];
            }
            res[i] = x*x;
        }
        
        return res;
        
    }
};