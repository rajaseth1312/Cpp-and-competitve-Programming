// allright my first contest
// this is the first problem
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >>t;
    int n;
    int k;
    int x;
    vector<int> y;
    int max;
    int h;
    for (int i = 0; i< t;i++) {
        cin >> n;
        max = 0;
        cin >> k;
        for (int j = 0; j < n; j++) {
            cin >> x;
            if (x > max) {
                max = x;
            }
            // how do we get min value 
            // lets just store in an array
            y.push_back(x);
        }
        if (y.empty()) {
            cout << 0;
            break;
        }
        // i saw a question earlier but cant 
        // do that here
        // how do i get the min value that doesnt
        // exist in the array
        // i didnt need to sort the array
        sort(y.begin(),y.end());
        h = y.size() % k;
        for (int d = 0; d<h;d++) {
            y.pop_back();
        } // oh we have to take the element of this 
        // as the max element 
        for (int o = 0; o < 101;o++) {
            auto r = find(y.begin(),y.end(),o);
            if (r != y.end()) {
                continue;
            }
             // i just have to take max value
            // and make it so that theres 
            // nothing more then that
            // yet why cant i implmenet it 
            else {
                
                cout << o << "\n";
                break;
            }
        }
        y.clear();
    }
} 
// why did i get a 111 like come on 
// why is that frozne
// crpa thats why
// thtas good no hacks 
// yeah dont understand much
// still have 2 hours gotta try
// given an array of n integers and k
// waht is this mex and what am i supposed to do
// lets start somewhere at least
// alright mex means the smallest thats not in the 
// collection
// so we check if 0 is there if not then
// we print 1
// we are just given an array 
// and we have to find the minimum value 
// that does not existt
// damnnnnn mannnn thats crazyyy
// what is the functoin to get minimum value 
// of an array
// why does the code nto runnnnn
//allright code works now submit
// wait what if its empty 
// just hope it works 
// pleaseeee
// it seems it will fail 
// come on give something
// the contest is still running
// will work on other problem
// crap
// it gave me 3 why not here
// thats a 50 point deduction
// for no reason
// thats -100 points
// why it not work
// this should work
// allright thats -150 nice
// i really wanna just submit the damn problme
// so what if the number isnt in the array at all

// well i learnt one thing from this 
// if u fail 1 time then just save the pretests
// its such a mess man
// it said the pretests are the same as the 
// submissions or something ?
// still trying to cheese is bad
// i have to check fi the first k digits are zero
// also i have to consider only the first 
// well i could have sorted the arrays
// cut them into k parts
// and then max them
// well lets try cheesing it i guess ?
// i have absolutely no idea on what to do anymore
// like how do i put k into all this 
// allright i only run the solution in 
// multiples of k
// so if it 2 
// then it runs 4 times 
// and skips the last one 
// basically i take the size of array
// divide it by k
// whatever remainder is left
// is the amount of elements i care about 
// if it fails now am rage quitting
// i get what 150 ish points on this 
// yeah 
// where is the damn problem man
// if this was python it would have been easier 
// i did think of that didnt implemnet it 
// sigh

// just so  done like why 
// why the come on man 

// allright i really dont know anymore
// what the issue is man

// what do i do now
//  each case i could have thought of 
// this wasnt the way to solve this 
// should have again read the question 
// carefully and implemented it properly
// still have half an hour
// the solution to this will be super easy
// am telling u 
// i just overcomplicated and made 
// a spagetti

// allright contest finished 
// i got to learn a lot of things 
// will work on it 
// allright as i wasnt able to get even 
// a single question submitted
// its considered a null 
// had to go 
// well so that was basically an unranked practice
// will see the editorial later 
