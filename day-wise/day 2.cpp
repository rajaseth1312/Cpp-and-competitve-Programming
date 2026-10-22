// hey today i will be going thorugh the cph book
// and solving cses questions

// so the cph is like short notes for compettive programming
// til now i know a bit of intro some sorting and some
// time complexity 

// alright so use 
// #include <bits/stdc++.h> and using namespace std;

// i learnt yesterday i can take input like 
// for (int i : x ) {cin >> x[i];}

// fast IO
// ios::syn_with_stdio(0);
// cin.tie(0);
// this bascally removes the sync of c and C++

// better to use "\n"

// use getline(cin , s) for long lines

// use while (cin >> x) {} for unknown no of input

// for files use 
// freopen("input.txt", "r" , stdin);
// freopen("output.txt" , "w" , stdout);

// better to take long long instead of int

// i know modulo from math class 
 
// i dont know wha these properties mean
// will have to use them to understand 

// dont add or compare floats okay
// take a small number like 10 power -9 and then see
// if the differnce is less than that to compare

// if (abs(a-b) < 1e-9) {}

// use typedef i think this is used for making 
// templates i dont know about those yet 

// okay marcros help shorten code replace strings or functions 


// i know some of these from math class 
// i know ap and gp not much good at hp 
// yep dont understnad anythign 

// am good at set theroy from class 

// dont know much about this logic part 

// negation converts 1 to 0 and 0 to 1 
// conjuctoin is like and 
// disjunction is like or 
// implication means if a is 1 then b has to be 1 
// equivalence means both same

// predicate is functoin returing T/F
// quantifier is something it means it connets
// a expression to a set so for all and there is 

// yeah cant make head or tails of whatever that is written

// allright understood it a bit 

// functoin is basically a relation 

// binets formula is used for fibonnaci numbers yeah am not getting
// that memorizied for a long time
// i know properties of log and a bit of basic graphs
// dont know how to calculate log or anti log yet

// alrihgt know natural log too good nothing too messed up till now

// am trying to get UAACO gold 

// and will try to get to the IOITC that is training camp
// big ish dreams but achievalbe too

// yeap trying to get blue in codeforcesss
// that is chapter 1 done

// so will solve cses questions after reading this module 
// the introductory problems

// allright it takes the worst possible case as time complexity
// only order of magnitude so algos may be better
// or worse and big o isnt arbitrary ? if i used that word rigth


// so like chemistry the slowest one matters the most


// i dont know it does g(n-1) two times
// best is O(n) for most cases 

// so P problems are something that have algos
// and NP problems dont have algos 

// so if n < 5000 then use n2 
// the constant factor matters 
// i can see tthat is the maximum sum from observation
// but how would i check through something like this
// we take a element i 
// then we keep adding and check maximum values from i to x 
// if those values are greater change max if not then give max
// allright i got something 

//yeah that n3 algo is confusing 
// first loop takes 1 element then second loop takes something
// oh so the second iternates thorugh the list for i 
// and the third loop calculates the resusts
// oh so a and b are initial and ending points of subarry
// and we are taking the sums of subarrays and checking max constantly
// we only have to give the max and not the numbers 
// so we dont store the subarry values 
// allright so i dont understand the k thing in this 
// will have to look into kadanes algorithm 

// alright that was 2 chapters done 
// now will try solving cses problems 


// first is weird algorithm 
// allright i saw this problem yesterday in recusion
/*
#include <bits/stdc++.h>
using namespace std;
// max constraint is 10^6 so have to do this in 1 loop
// alright 1 case done 
void wa(int n) {
    if (n % 2 == 0) {
        n = n / 2;
        cout << n + " ";
    }
    else if (n == 1) {
        cout << n;
        return;
    }
    else if ( n % 2 == 1) {
        n = 3 * n + 1 ;
        cout << n + " ";
    }
    
    wa(n);
}

int main() {
    int n = 0;
    cin >> n;
    cout << n + " ";
    wa(n);

} will try using a normal for loop 
    */ 
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long  n = 0; // number becomes more then int can handle 
    cin >> n; // error was it was adding 
    cout << n << " ";
    // number to string 
     while (true) {
        if (n % 2 == 0) {
            n = n / 2;
            std::cout << n + " ";
        }
        else if (!(n % 2 == 0)) {
            n = n * 3 + 1;
            std::cout << n + " ";
        }
        else if ( n == 1) {
            std::cout << n;
            break;
        }
    }

    for (int i = 0; i < 100000; i++ ) {
        if ( n == 1 ) {
            break;
        }
        else if ( n == 2 ) {
            cout << n / 2;
            break;
        }
        else if (n % 2 == 0) {
            n = n / 2;
            cout << n << " ";
        }
        else {
            n = 3 * n + 1;
            cout << n << " ";
        }
    }
}// i dont understnad where the issue is ;

*/
// allright finally got the problem solved

// missing number i can put all numbers in a set
// iternate to see which is not in the set
// return that i guess ?
// cant use data structures forthese 
/*#include <bits/stdc++.h>

using namespace std;
// shouldnt use sets right now 
// can try using a vector
int main() {
    int n = 0;
    vector<int> list1 , list2;
    cin >> n;
    for ( int i  = 0 ; i < n ; i++) {
        cin >> list1[i];
        list2[i] = i;
    }
    sort(list1.begin(), list2.end());
    sort(list2.begin(), list2.end());
    for ( int j : list1) {
        if (list1[j] == list2[j]) {
            continue;
        }
        else {
            cout << j;
        }
    } */
     // input has been taken
    /*sort(list1.begin(), list1.end());
    for (int j : list1) {
        if (binary_search(list1.begin() , list1.end() , j)) {
            continue;
        }
        else {
            cout << j;
        }
} }
*/
// so this doenst work lets try comparing two vectors and see which element is not in them
// this didnt work too

// i have a silly idea lets try 
/*
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n= 0;
    int sum = 0;
    int sum1 = 0;
    int x = 0;
    cin >> n;
    for (int i = 1; i< n + 1; i++ ) {
        sum1 += i;
    }// this run 2 times adds 1 + 2 = 3  
    for (int i = 1; i < n ; i++) // runs once gives 1 = 1 
    {
        cin >> x;
        sum += x;
    }
    cout << sum1 - sum;


} */
// got 1 case right 
//YEAHHHHHHHHH 
//that was another question done 
// even though i was trying to use so much complicated
// things the solution was so simple


// i got 2 chapters of cph done and 2 questions till now

// now the third question
// i saw something like this on cdoeforces too

// will use the built in function

// also kadanes no that cant be used here

/*
#include <bits/stdc++.h>

using namespace std;

int main() {
    // its a question of string

    string x;
    cin >> x;
    int count = 0;
    // cant use adjacentfind sad
    // dont try to find fancy stuff

    for (string i : x) {
        if (x[i] == x[i+1]) {
            count++;
        }
    }
    cout << count;
    
}

#include <bits/stdc++.h>

using namespace std;

int main() {
    // its a question of string

    string x;
    cin >> x;
    long long count = 0;
    long long  maxco = 0;
    // cant use adjacentfind sad
    // dont try to find fancy stuff

    for ( char i : x) { // here 3 is not qual to 4 but it still counts ? 
        if (x[i] == x[i+1]) {
            count = count + 1 ;
            maxco = count;
        }
        else {
            count = 0;
        }
    }
    if (maxco == 0) {
        cout << maxco + 1;
    }
    else {cout << maxco;}
    
}
// yes 4 correct 

// now 6 cases better now 

// dont understand at all why its wrong 
*/

// i got the problem half right i guess ?
// will move on coz i really dont understand whats going on

// okay so in this 
// take xi and xi+1 
// if xi+1 < xi
// keep adding their differnce 
// 3 -2 = 1 
// 5 - 1 = 4 add both gives 5 

/*
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 0;
    long long sum = 0;
    long long max1 = 0;
    cin >> n;
    long long  x = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        max1 = max(max1 , x);
        if (x < max1) {
            sum += abs(max1 - x);
        }
    }
    /* for (int j : x) {
        if (x[j] > x[j+1]) {
            cout <<  (x[j] - x[j+1]);
        }
        else {
            continue;
        }
    } 
    cout << sum;
}
*/
// have been doing these for 2 and a half hours 
// will try solving for 3 mins more then stream ends

// and that was this done 
// am starting to understand all it takes 
//is effort and staring ata problem long enough

// have to print like 1  3 5 7 9 then 2 4 6 8

// thats a good way 
// 1 3 5 2 4
// print all odd numbers then all even numbers 
// for 1 no solution for 2 no solution for 3 solution for 4 2 4 1 3
// if input is les than 4 no solutoin
// if greater then 4 print all odd numbers then even numbers


// have to print like 1  3 5 7 9 then 2 4 6 8

// thats a good way 
// 1 3 5 2 4
// print all odd numbers then all even numbers 
// for 1 no solution for 2 no solution for 3 solution for 4 2 4 1 3
// if input is les than 4 no solutoin
// if greater then 4 print all odd numbers then even numbers
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 0;
    int z = 2;
    cin >> n;
    if (n == 1) {
        cout << 1;
    }
    if (n < 4 && n > 1) {
        cout << "NO SOLUTION";
        return 0;
    }

    for ( int i = 1; i <= n/2; i++) {
        cout << z << " ";
        z = z + 2;
        
    }
    z = 1;
    for ( int i = 1; i <= n/2; i++) {
        cout << z << " ";
        z = z + 2;
        
    }

    if (n % 2 == 1 && n > 4) {
        cout << n << " ";
    }
    

    // allright 12 cases done 

        
        

} */
// yes 2 cases worked 

// allright this question done too

// allright this is it for the stream
// i read 2 chapters of cph
// and did 4 question on cses 
// 3 were fully right 
// and i couldnt get 1 fully correct 

// Welcome back
// i read chapters 1 and 2 of cph 
// solved a few questoins will be solving more now

//i dont know what to do with this 
// will try another problem

// dont understand this one too
// both the questoins require a math formula 
// that i dont know yet 

// it also looks complex but i cant just skip problems
// will try working on this

// will try bit strings it seems doable 

/*
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long y = 1;
    // so i have to use permutation formula i think
    long long m = 1000000007LL; // i was missing a zero
    double n = 0;
    cin >> n;
    //thats why it kept overflowing 
    // it is still overflowing 
    // wait a second if i have to take multiplication
    // it is basically 2 * 2 * 2 to n times ;
    for (int i = 0 ; i < n; i++ ) {
        y = ((y%m) * (2 % m)) % m;
    } // it makes it 2 power n stored in y 
    cout << y;
    // this should do something 
    // there is no power operator in c++ 
    // allright now have to implement the modulo
    // will try implementing this formula
} */// got 1 or 2 more cases correct 

// what do mean inf thats not evne possible 
// a 134 digits come on


/// yeahhhhhhhhhhhhhhhhhhhhhhhhhhhh

// done iwth this oneeee
// i read somewhere not to use pow function can see now why

// that took me neraly an hour but i got the answe

// now trailing zeros it also has something to do with
//modulo i think 

// didnt get far in that problem
// every problem i skipped will look up the editorial later 
// and then retry tommorow 
//

// all these questions need some math or observation i need to know 
// beforehand coz these are just so basic if u know what to do and 
// super tricky if u dont 

// whats gray code ?
// so for 4 it will be 0000 0001 0010 or soething ? 
// how do i add bits ? 
// i know from a bit of class
// i can convert numbers into bits 
// how do i add 1 bit to a bit ? 
// how to store bits in c++ 
// i have never even thought of that 

// we get 0 then 1 then 3 then 2 whyyy ?

// in a solid 1 hour 25 mins i only solved 1 problem
// tried looking at differnt problems and got no where 
// will keep on reading now the cph handbook

// i know a bit of bubble sort 
// inversion is how many pairs need to be switched 


// i dont know how to implement merge sort 
// so best case for sorting is n log n 
// when using comparisions

// okay dont worry about manual sorting implementations
// always use stl

// dont understand the syntax 
// understoof for user defiend structs give a comparions operator

// we can give external comparision operators to sort method

// if not sorted then best time to search n
// if sorted then log n using binary sreach

// i learnt today there is a binary method available


// allright read ch 3 too
// will complete data structs and then complete search 
// maybe greedy if i have the time today  


// there is vector set and multiset also unordered set 
// map is like a dictionary 
// checking map adds that value to the map 

// begin points to first and end points to the element 
// after the last one 
// there is a bitset too 

// and a deque \stack follows filo from what i remember
// first in last out
// queue is first in first out 
// i dont know what a priority queue is 

// will look into priority queues later
// might have to do some leetcode 

// policy based data structures are external good stuff
// providided by the g++ compiler 
// i know it provides 128 bit ints too 
// basically a indexed set is a sorted array


// allright thats another chapter done yay
// well a chapter done is baiscally an intro
// a taste to the topic have to do questions to 
// really understand the topics

// it has been 2 hour sof the stream
// i did a lot of work despite the frustration
// i feel the brainrot leaving from these streams

// allright back to complete search
// the book just went super high

// alright generating subsets and um generating
// permutations didnt understand right now

// from what i remember this queens one 
// is a leetcode hard question
// i thought i was readinga  intro book

// they dont look symmetrical to me 
// oh so the two paths are symmetrical
// not their parts 

// take simple observations 
// i am not russian enough for this is a blog 
// i read on codeforces its probably correct
// gotta do more maths 

// meet in the middle is like doing what merge
// sort does or what i tried doing in a earlier 
// question by breaking the spaces 
// i dindt know it was a real technique i was 
// just thinking of doing something i found good


// why cant we take 2 50 coins ? 
// i cant do that 


// from what i know dp and greedy problems arnt hard
// findign what to ue is a lot harder 


// all this is taking a lot to even read
//discomfort is good too

// hello viewer
// thank u for watching
// hope u enjoy 

// allright done with thta small goal
// read thorugh 6 chapters today
// and solved some questions on cses 

// will continue reading a bit more now 


// guess time to get over another mile stone

// allright dynamic programming 
// uses memoization
// memoizatoin according to what i understand
// it remembers the solution of that subset 


// constant inf denotes infinite

// the code is so compact and compact
// takes time to understand
// still dont understand much 

// that was earlier in the logic section
// it means or and the upper v means and 

// what trick it means that we update the values 
// from a given direction
// and knap sack problems are quite general
// and the general idea is used mostly everywhere

// now levenshtein distance is how many operations
// needed to make astring into something else

// i saw something like counting tilings on codeforces
// theather square if am right 

// in total fo the two lives 
// i went thorugh 7 chapters from basics to dp 
//will complete the basics sections the rest 3 chapters


// two pointer nad 2 sum are things i heard on leetcode


// a 2d or 3d prefix sum that would be good to see


// wasnt a fenwick tree for a lot higher something ?


// a bit more difficult ? this went from basic loops to 
// fenwick trees and segment trees in one sitting
// i gotta be considered as a madman by now
// have 2 more hours of stream left

// what is zero based indexing ? 

// u can use 2 binary indexed trees or fenwick trees
// at the same time like who will be mad enough to try that
// well ofcouse me one day coz am sitting here and learning

// page 100 of the cph complete 
// just a few more crawl 
// before i can do something excitingly painfull


// we can compress the indices in a way that 
// it doesnt change the order and it doenst use
// too much memory allowing us to do operaions on
// the data set 

// so something called a differnce array exists


// finally chapter 10 of the book
// the last "beginner" topic 
// u can see the genuine madness i am getting
// at the start of stream 1 it was so rainbow and
// sunshines now its just gotten so gritty and 
// mathful ?
// will tkae a break of 3 minutes
// back 

// allright bit manipulation

// bits can negative too 
// unsigned means no negative


// Hamming distance i found a question on cses today

// you solve like this

/* 
int hamming (int a , int b) {
    return __builtin_popcount(a^b); 
}
*/

//FINALLLY  a 100 pages doneee 

// so we were studying bits coz they optimzie algoritm
// by eihter 32 or 64 times 
// and is used in dynamic programming 


// THAT WAS AN ENTIRE PART DONE IN 2 SITTINGS
// going from basic sorting 
// to damn fenwick trees and dp with bits is
// just damaging my sanity
// have about an hour left

// will try reading through graphs as well
// tonight will do solving on leetcode to get
// these data structures into my head 
// and will live stream that solving too



// graph is made up of nodes and edges 
// node is data and edge is what connects nodes
// path length is the no of edges
// a path is cyclic if it has first and last node
// same and simple if one node appears only once

// a connected graph if there a path between all nodes
// ie no node should be alone 
// connected parts of a graph are components
// if osmeone is alone then that is one component
// a tree is a graph that has n nodes and n-1 edges
// well that answers my questoin of what is a tree
// edge can have directions 
// edges can also have weights 
// that basically means that they have lengths
// two nodes are neighbours if there is an edge
// connecting them and the degree is like carbon
// the no of other nodes surrounding a node 
// connected with an edge

// the plan was to keep it max to 6 30 but am gonna
// push the stream a bit more 
// i wanna reach to dijkstra in this sitting 
// if i can 

// the sum of degrees is always twice the no of 
// edges
// graph is regular if degree of every node is 
// regular if degree is constant 
// graph is complete if degree of every node is n-1
// indegree is how many egdes end 
// and out degree is how many edges start 
// end means pure end 

// will stop the stream at 7 and then agian
// stream at 9 or 10 to something and do 
// a lot of leetcode


// in coloring no adjacent nodes have the same color
// graph is bipartile if it can be colored in 2 ways
// any graph is bipartile if it doenst contain
// a cycle with an odd number of edges 

// a graph is simple if no egdes start and end 
// at the same node and there are no multiple edges

// now for the hard part making graphs in c++
// well this seems easy 
// "seems"

// there are 3 common representations
// adjacency list representation
// we use a vector for adjacency lists 
// push back so something like stacks ? 

// there is an adjancy matrix 
// drawback of adjancy matrix is contains n2 
// elemets and most are just zero

// edge list contains all edges in some order
// if it is weighted then it required 3 ints
// so basically like a 3d thing ? 


// now onto graph traversal i know there are 2 
// basic searches breath first and depth first 
// searches

// dfs is simlper and uses recursion
// bfs uses quue and is a bit more complex
// in practice implement more dfs then bfs

// to chekc biparititeness make one node blue
// its neighbours red
// and then its neighbours blue
// if they conflict then it is not bipartite

// if the amount of colors is three then it is a
// NP hard problem and no effective algorithm exists

// bellman ford can be used to find negative cycles
// dijkstra assuems there is no negative length

// bellman ford can be used to search for negative
// anywhere in the whole graph regardless of staritng
// SPFA is a variant of bellman ford and at times faster 
// than bellman ford 

// finally at dijkstras
// it was quite a siting from basic
//sortings to now dijkstras 
//the amount of brain rot that got fixed today
//  in dijkstras the node lengths are final
// in the morning i would have said 
// fenwick or segments trees and dijkestras and stuff
// is hard the problem isnt understand them
// its in the math the reasoning and the implementation
// allright to implemnt dijkestras i need to see priority queues

// this is it for this stream
// will come back later for the leetcode grind on trees 
// and stuff

// ba byeeeeeeee

// welcome back

// i  will be solving leetcode questions
// on the topics i read today
// from greedy and dp to trees and graphs
// this is day 2 of my journey 

// so am given a tree
// have to find the longest distance 
// first thought is 
// each graph layer is 

// 2 ^ 0
// 2 ^ 1
// 2 ^ 2
// 2 ^ 3 
// so basically we add up the numbers of elemnsts
/*
#include <bits/stdc++.h>

using namespace std;
int i = 0;
int x = 0;
while (cin >> x) {
    i++;
    cout << i;
}

*/


// till now have done 5 leetcode questions
// 3 on bfs and 1 on graph and 1 on array
// will try a question on dijkstras 
// am learning a bit more from this 
// instead of grinding low questions that test math
// will do them later i can feel the level
// inceasing

// in a solid 2 hours 
// i got to implement dfs and graphs 
// 5 questions so i wont forget anything about that
// good progress


// solved 8 questions 
// 3 dfs 1 array 2 dp 1 shortest 1 graph

// that is it for the day 
// this was the third stream of the day
// in total i solved a few cses and a few leetcode
//questions and read about 13 chapters of the
// CPH handbook
// ba bye
