class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        int difference = 0;
        for(int i=0; i<nums.size();i++){
            difference = target - nums[i];
            if(seen.find(difference)!=seen.end()){
                return{seen[difference], i};
            }
            seen[nums[i]] = i;
        }    
        return {}; 
    }
};