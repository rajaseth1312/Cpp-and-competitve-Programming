// allright first boilerplate

#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        char temp;
        temp = s[i];
        if (temp >= 'A' && temp <= 'Z') temp = tolower(temp); 
        if (temp != 'a' && temp != 'e' && temp != 'y' && temp != 'o' && temp != 'u' && temp != 'i' ) cout <<"." << temp;
        }
    }


// this question is superimportnat
// coz it shows the pure basics of strings
// goota look at more c++ strings
// wait is there no upper or lower in string c++

// allright finally the damn thing worked

