class Solution {
    public:
        bool isPalindrome(string s) {
            int start = 0;
            int end = s.size() -1;
            while (start <=end) {
                if(!isalnum(s[start])){start++;continue;}
                if(!isalnum(s[end])){end--;continue;}
                if(tolower(s[start]) != tolower(s[end])) return false;
                else{
                    start++;
                    end--;
                }
            }
            return true;
        }
};








/*
// how do u upvote solutoins btw in leetcode
// finally learnt how to upvote


// from tihs question i elarnt how to use two pointers 
class Solution {
public:
    // first thing will check how to get just letters remove spaces and such
    // allright so firstly try removing spaces using two pointer
    vector<char> x; //stores the unfluffy string
    // um whatever the string is called without spaces
    int itr = 0;
    bool checker = true;
    vector<char> rx;
    bool isPalindrome(string s) {
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                if (isalpha(s[i])) x.push_back(((char)tolower(s[i])));
                else x.push_back(s[i]);
                // if am using isalpha do i need to use two pointer 
                // lets see 
            } 
        }
        reverse_copy(x.begin(),x.end(),rx.begin());
        for (int i = 0; i < x.size(); i++) {
            if (x[i] != rx[i]) checker = false;
        }
        return checker;

            
        // this loops the string 
        // we check x and its reverse if both true then its fine 


// which c++ function behaves as alpha from python

        
    }
};
*/
// i know python has a alnum thing we can use to check dont know about c++
// first things first get that loop running and all this into a string 


// there is no line 1082 man come onn
// so u use alnum then coz u need both letters and umbers 
