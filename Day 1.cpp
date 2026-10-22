//  today is day 1 i will start going thorugh material
// my stream got disconnect i reached till ehre 
// i did my first question on recursion will try 
// submitting
// stream is working now will start reading and solving 
/*#include <bits/stdc++.h>
// right now we have to print something using 
// recusion that basically means calling a function
//back to back to itself until it finishes 

void recursion(int n) {
    // have to use recursion not for loop
    if (n <= 0) {
        return;
    } // did not think this will have to 
      //think of edge cases too
    std::cout << "I love Recursion" << "\n";
    recursion(n - 1);
}

int main() {
    int n;
    std::cin >> n;
    recursion(n);
}
*/
// first problem of the day done 

// that was like a warm up i dont understand
// how that resource work so will use usacos one 

// i dont understand much of the question 
// sketching the question has helped 
// i need to find distance between two points 

// we first get all the x and then y 
/*
#include <bits/stdc++.h>

int main() {
    int n;
    std::cin >> n;
        std::vector<int> x(n);
        std::vector<int> y(n);
    for (int i = 0; i < n; i++) {
        //i guess i should use a map here ?
        // it wont work
        // no idea how to implement this
        // i dont know if its a good thing its autocompleting
        // right now put x values
        std::cin >> x[i];
    }
    for (int i = 0; i <n; i++) {
        // now for y
        std::cin >> y[i];
        // now i got both the values 
    }
    int max = 0; // max distance
    int dist = 0;
    for (int i = 1; i < n-1; i++) {
        // i dont know what happened right now
        // the formula is wrong btw that got displayed
        dist = ((x[i] - x[i-1]) * (x[i] - x[i-1])) +( (y[i] - y[i-1]) * (y[i] - y[i-1]));

        if (dist > max) {
            max = dist;
        }
    }
    std::cout << max * max << "\n";
        // allright the code didnt work 
} */
// well my compiler didnt work

// i got to my first 30 minutes yay well 42 but those 12 mins didnt count coz stream broke

// will read the editorial now dont know what happeendings 

// again wrong eh i will rechance the entire code
// use brute force as it said 
// no using vectors

/*
#include <bits/stdc++.h>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> x(n), y(n);

    for (int &t :x) { std::cin >> t;}
    for (int &t :y) {std::cin >> t; }

    int dist = 0;
    double max_squ = 0.0;
    for (int i = 0; i <n ; i++) {
        for (int j = i + 1; j < n; j++ ) {
            // this is probalby wrong
            int dx = x[i] - x[j];
            int dy = y[i] - y[j];

            dist = dx * dx + dy * dy;
            max_squ = std::max(max_squ, sqrt(dist));
// allright i learnt how to simplify the code
// how to visualize a bit of brute force 
        }
        // i had placed it out side of for loop 
        
    } // make it double to store decimals too 
    std::cout << (int) std::round(std::pow(max_squ, 2)) << "\n";
}*/
// so the solution is kind of same i was making some minor erorrs 

// finally that was question 2 done 

// this is enough for the day 
// am super sleepy will continue tommmorow 
