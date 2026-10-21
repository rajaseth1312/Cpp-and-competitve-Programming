class Solution {
public:
     vector<vector<string>> ans; // why not colored ?
     unordered_map<string, int> mp;
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        for (int i = 0; i < strs.size() ; i++) {
            string temp = strs[i];
            // now we sort this string 
            // then compare to existing values
            // this is a kind of question u have to do on pen and paper
            // well most leetcode is like that
            sort(temp.begin() , temp.end());
            if (mp.find(temp) != mp.end()) ans[mp[temp]].push_back(strs[i]);
            else {
                mp[temp] = ans.size();
                ans.push_back({strs[i]});
            }
        }
        return ans;
    }
};
// no idea what to do here 
// first things first lets set up to find anagrams 
// first lets get a loop running then we will use a anagram function ?
// i kind of somehwat nuderstand the code 
// its still a bit foggy 
// one good thing about this is that it can be expanded for any kind of string
// so this apporach works for unicode too instead of just ascii
