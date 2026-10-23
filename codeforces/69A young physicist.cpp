// super simple 
#include <bits/stdc++.h>

using namespace std;

int main() {
    int x = 0; 
    int z = 0;
    int y = 0;
    int x1 = 0; 
    int y1 = 0;
    int z1 = 0;
    int n; 
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        cin >> y;
        cin >> z;
        x1 += x;
        y1 += y;
        z1 += z;
    }
    // wait dont even need this
    if (x1 == 0 && y1 == 0 && z1 == 0) cout << "YES";
    else cout << "NO"; 

    
 
}
// allright this passed 1 test case
// thats good
// why did thi snot work 

// yeapppppp simpleeeeeee
// just had to initiaze it 
// it was actualyl giving values like 
// -3424242424234234 and stuff