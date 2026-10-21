#include <iostream>
#include <string>
int main() {
    int n;
    std::string w;
    std::cin >> n;
    for (int i ; i < n ; i++) {
        std::cin >> w;
        if (w.size() > 10) {
            std::cout << w.at(0) << w.size() - 2 << w.back() << "\n";
        }
        else {
            std::cout << w + "\n";
        }
        
    }

}
