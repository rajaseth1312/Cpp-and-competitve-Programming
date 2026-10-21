class Solution {
    public:
         //if i remember correctly this gives
        // default value 1 to all;

        vector<int> productExceptSelf(vector<int>& nums) {
            
            int n = nums.size();
            vector<int> postfix(n);
            vector<int> ans(n);
            vector<int> prefix(n);
            prefix[0] = 1;
            for (int i = 1; i < n;i++) {
                prefix[i] = prefix[i-1] * nums[i-1];
                // why does 12345 result in 112624
                // first element is 1 then we reach element 2 
                // and then we reach 3 giving us 1 * 1 * 2 
                // then we reach element 4 giving us 1 * 1 * ..
                // and 5 isnt count in this 
            }
            postfix[n-1] = 1;
            for (int i = n-2; i >= 0;i--) {
                postfix[i] = postfix[i+1] * nums[i+1];
            }
            for (int i = 0 ; i < n; i++) {
                ans[i] = prefix[i] * postfix[i];
            }
            return ans;
            // allright i got the prefix done 
            // now onto post fix 
            // actually wont this just be the reverse of prefix
            // lets try
            //allrigjt no being cheeky
            // lets genereate post fix the same way

        }// where is the pointer going bad man
}; // so what was happeneing was that prefix was defined out side the function
// and i was trying to get the value in the function
// so it was giving a null pointer
// still am happy i was close to the solution






/*class Solution {
public:
    vector<int> ans;
    vector<int> productExceptSelf(vector<int>& nums) {
        // taking the size of array into a var
        // first lets try a brute force method
        int n = nums.size();
        for (int i = 0; i < n; i++ ) {
            int pro = 1;
            for (int j = 0 ; j < n;j++){
                if (i == j) continue;
                pro *= nums[j];
            }
            ans.push_back(pro);
        }
        return ans;
        // allright we got a brute force working 
        // now how do we optimize this
        // this will get a TLE i knew that
        // still 18 cases solved thats good



    }
    // if i were to use a hash map in this 
    // i can store all elements in a hash map and its frequency
    // and then i can take one element out and multiply every other numbers 
    // yeah that wont work 
    // if we have to precompute prefix and suffix sums 
    // its a topic i have a lot less experience with
    // so we are given an array and we have to take product of 
    // every tihng besides that number itself 
    // have to do this in O(N) time meaning 
    // i can use only a single loop
};*/
