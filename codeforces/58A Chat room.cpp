// now this seems simple 
// again a strings question
// nothing complex
// just find the letters 
// h e l and o 
// check how many l using findall
// and then check their order 
// if it is inceasing or not
// basically we can um use a hash map
// or just a simple list ? 
// lets try running a brute force on this 

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    // not needed here
    string h = "hello";
    cin >> s;
    int i = 0;
    for (int j = 0; j< (int)s.size(); j++) {
        if (s[j] == h[i]) {
            i++;
            if (i == (int)h.size()) break;
        }
    }
    cout << (i == (int)h.size() ? "YES\n" : "NO\n");
}
// we could make a nested nested nested loop or something
// nah that wont work in given time
// we could use a hashmap 
// its quite simple yet quite complex 
// fun
// yeah this is something i will just waste time on
// and time is something i dont have
// okay i have to implement a greedy 
// how would i work on a greedy here
// there are no coins or anything

// oh i just got an idea from the binary saerch
// question i did today
// basically 
// why not change i to the position of that 
// but how would i make an if statement 
// execute just once
// yeah am not getting this implemenetd

// so we can either delete the wrods
// that are not in the thing 
// and then check if it exists or not
// still there can be duplicates
// we could use a min function to 
// find the lowest vales of each as such 

// allright understood the solution
// have to take a 3 min break or something
// yeah dont need it 

// allright AC aquired 