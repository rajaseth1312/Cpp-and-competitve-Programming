#include <iostream>
#include <string>

int main () {

    int n;
    int v = 0;
    std::string x;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> x;
        if (x.find("+") != std::string::npos ) {
            v++;
        } else {
            v--;
        }
    }
    std::cout << v;
}
