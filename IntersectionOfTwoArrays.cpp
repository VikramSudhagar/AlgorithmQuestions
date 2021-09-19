//Intersection of Two Arrays
#include <iostream>
#include <vector>
#include <iterator>
#include <unordered_map>

using namespace std; 

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> answer;
        
        unordered_map<int, int> umap;
        
        for(int i = 0; i < nums1.size(); i++) {
            umap[nums1[i]]++;
        }
        
        for(int j = 0; j < nums2.size(); j++){
            
            if(umap[nums2[j]] > 0){
                answer.push_back(nums2[j]);
                umap[nums2[j]]--;
            }
            
        }
        
        return answer;
    }
};
