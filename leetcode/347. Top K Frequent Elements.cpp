// i will come back to that method later
class Solution {
    public: 
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        // we take size before for better speed
        unordered_map<int,int> mp;

        for (int &num: nums) {
            mp[num]++;
        } // we are adding the frequency of everything in this 
        vector<vector<int>> bucket(n+1);

        for (auto it: mp) {
            int element = it.first;
            int freq = it.second;

            bucket[freq].push_back(element);
        }

        vector<int> ans;

        for (int i = n; i > 0; i--) {
            if (bucket[i].size() == 0) continue;

            while(bucket[i].size() > 0 && k>0){
                ans.push_back(bucket[i].back());
                bucket[i].pop_back();
                k--;
            }
        }
        return ans;
    }      
};


// allright from what i understood in this solution we use bucket sort to sort the values 
// will  end this live stream here





/*class Solution {
public:
    bool cmp(pair<int,int>& a , pair<int,int>& b) 
    {
    return a.second < b.second;
    }
    void sort(map<int,int>& M, int k , vector<int> ans ) {
        vector<pair<int,int>> A;
        for (auto& it : M) {
            A.push_back(it);
        }// should look up using custom comparators for sort
        sort(A.begin(),A.end() , [](pair<int,int> a , pair<int,int> b) {
            return a.second < b.second;
        });
        // why does the implementation not work 
        for (int i = 0; i < k; i++) {
            ans.push_back(A[i]);
        }
    } 

    unordered_map<int , int> x;
    vector<int> ans;
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // so we basically use again an unordered_map
        // store the number and its count 
        // then find the k biggest numbers and add them to an answer vector
        // lets iterate the nums
        // better to store the size first then put in loop
        int n = nums.size(); 
        for (int  i = 0; i < n; i++) {
            // now we see if element exists in hashmap
            if (x.find(i) != x.end()) x[i]++;
            else x.insert({i , 1});
        }
        // will just sort the map itself
        // reading the CPH gave me a lot of new things such as custom comparators
        
        sort(x,k,ans); // cant sorton a map like this 
        
        return ans;
        // have to look up how to sort a map
        // okay here we have to make a custom comparator
        // we got the map ready , now we return the highest values 
        // the question is how do i find the highest values in map
        // i can iterate it to find the max values 
        // it consists of something like this 
        // {1 : 4 , 2: 3 , 4: 2} 
        // if i had to take only the max element i would iternate over the loop
        // and find the highest values
        // i got an idea
        // we run a loop k times find the maximum then simply remove it from map
        // and as this is unordered map the time complexity wont go insane
        // right now the time complexity is o(n)
        // if i add another loop it would be o (n*k)
        // i dont know yet if that is better than o (n log n)
        // wait i will have to look up and set max thats bad
        // instead i can sort the map in desending order
        // and then return the k elements ?
        // i found out how to get this into o log n time
        // just have to get the code working
    }
}; */
