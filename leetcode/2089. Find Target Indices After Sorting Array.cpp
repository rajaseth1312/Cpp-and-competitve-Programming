class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin() , nums.end());
        vector<int> x;
       // auto it = lower_bound(nums.begin() , nums,end() , target);
        for (int i = 0; i < nums.size() ; i++) {
            if (nums[i] == target) x.push_back(i);
        }
        return x;
    }
}; // the problem was the way it iterates a array using for that messed up 
// also leetcodes ranking are just messed up keep submitting and keep getting better ranks
