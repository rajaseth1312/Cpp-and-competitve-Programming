class Solution {
public:
    unordered_set<int> x;
    bool containsDuplicate(vector<int>& nums) {
       for (int num : nums) {
            if (x.count(num) > 0) return true;
            x.insert(num);
       }
       return false;
    }
       
       
       
       
       
       /* for (int i = 0; i < nums.size() ; i++) {
            x.insert(nums[i]);
        }
        if (x.size() == nums.size()) return false;
        else return true;
    } */
};
// well the logic is right i assume 
// huh what happened inthat ? that was weird
// in this question we are given a number 
// and hav eto see if something appears twice 
// we just use a unordered set to hash for speed 
// and then lookup if an element belongs to that set or not
// well problem solved will see the editorial for better codes
// i used a hash set 
// hash sets cant contain duplicates so i dont know why the count works
// oh it just check if a number is in the set isntead of using size
// which is more expernsive
// idk why the run time is bad for this 
