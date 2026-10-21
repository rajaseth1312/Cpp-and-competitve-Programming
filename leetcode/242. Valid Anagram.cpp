class Solution {
public:
    map<char ,int> x;
    map<char ,int> y;
    bool isAnagram(string s, string t) {
        
        // the code takes into account the edge case if both lengths arnt same
        if (s.size() != t.size()) return false;
        // makes a vector of 26 
        vector<int> count(26,0);
        for (int i = 0 ; i < s.size(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
            // this subracts the ASCII value of a 
        } 
        for (int num: count) {
            if (num != 0) {
                return false;
            }
        }
        return true;
        // how do i compare two maps
        // this is better to use 
        // the approach i was using was bad 
        // because there was a big constant factor 
    }
};
// sort of both of the strings
// then match them 
// why did sort not work  ?
// we can make a custom comparator 
// and then feed into sort function
// allright better solution is to agian use a hash map
// whats with leetcode and hash maps
// is there an unordered map ? 

// the damn system is broken here same code and now beats 100 percent 

