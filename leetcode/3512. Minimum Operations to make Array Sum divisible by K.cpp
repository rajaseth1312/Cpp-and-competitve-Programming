class Solution {
public:
    int sum;
    int count = 0;
    int minOperations(vector<int>& nums, int k) {
        // see cant get anything first try
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        while (sum % k != 0) {
            count++;
            sum--;
        }
        return count;
    }

};

// finally a c++ question after 3 random stuff
// u basically calcualte the sum check if it divisble by k or not 
// if it isnt subtract 1 and check again 
// keep subtracting 
// hum the answer should be 2 in example 1 coz we can cut 7 by 2 to make 5 
// oh we have to make the sum not the multiples
// gotta love c++ for the beautiful 0ms
