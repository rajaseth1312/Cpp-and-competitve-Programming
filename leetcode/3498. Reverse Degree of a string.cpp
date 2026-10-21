class Solution {
public:
    unordered_map<char,int> x = {{'a', 26} , {'b', 25} ,{'c', 24} ,{'d', 23} ,{'e', 22} ,{'f', 21} ,{'g', 20} ,{'h', 19} ,{'i', 18} ,{'j', 17} ,{'k', 16} ,{'l', 15} ,{'m', 14} ,{'n', 13} ,{'o', 12} ,{'p', 11} ,{'q', 10} ,{'r', 9} ,{'s', 8} ,{'t', 7} ,{'u', 6} ,{'v', 5} ,{'w', 4} ,{'x', 3} ,{'y', 2} ,{'z', 1 } };
    int sum = 0;
    int reverseDegree(string s) {
        for (int i = 0; i < s.size() ; i++) {
            sum += x[s[i]] * (i + 1);
        }
    return sum; // it will give some error seeee
    }
    // ykw lets just manaullay make the data 
}; // i remember something we did earlier like i - 'a';
// if i do  b - a what will i get hum 
// we could basically make a hash map manually and then do this which would give this a time of o(n) i would assume 
// lets try
// making a hash map in a string question peak leet code

// damn that code was so much cleaner than this 
// using an unordered map made it worseee
// yeah no more trying to get the gatcha 


// holy hell 933 cases thats insane
