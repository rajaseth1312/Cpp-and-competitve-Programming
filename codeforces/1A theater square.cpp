// onto the boiler plate code

#include <bits/stdc++.h>

using namespace std;
long long a;
long long n;
long long  m;
// forgot its codeforces
long long ans;
int main() {
    cin >> n;
    cin >> m;
    cin >> a;
    ans = ((m+a-1)/a) * ((n+a-1)/a);
    // i asked my teacher the formula
    // didnt understand what happened
    cout << ans;
    
}
// well no compilation error
// but a wrong answer
// it gave a zero thats wrong
// it should be 6/4 * 6/4 = 2  *2 = 4

// silly mistakes make u hate ur life
// i tried deriving the math formula btw
// it took me an hour and i got somewhere right

// now it should work
// damnit 

// why did it give a 1 ? 
// is there no ceil function in c++ ?
// allright so  iuse floor here

// the logic of the formula is right 
// why does this not work man

// finallyy
// it probably was because ceil works on 
// doubles or something 
// and it was giving somethign else

