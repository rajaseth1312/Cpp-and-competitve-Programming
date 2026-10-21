class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n =  nums.size() ;
        for ( int i = 0; i < n; i++) {
            nums.push_back(nums[i]);
        }
        return nums;
    }
};
// the code is correct just dont know the deal with these pointsers
// i dont understand how do i access the nums elements this just crazy;
// why did that exceed the memoryyy
