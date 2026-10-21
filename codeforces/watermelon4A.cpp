#include <iostream>

int main() {
int x;
std::cin >> x;
if (x == 2) {std::cout << "NO"; } 
else if (x % 2 == 0) {std::cout << "YES";}
else if ( x % 2 == 1) {std::cout << "NO";}
}
