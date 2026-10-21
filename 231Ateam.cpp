    #include <iostream>
    
    
    int main () {
        char x;
        char y;
        char z ;
        bool check1;
        bool check2;
        bool check3;
        int n;
        int counter = 0;
        std::cin >> n;
        for (int i = 0; i < n; i++) {
            std::cin >> x;
            std::cin >> y;
            std::cin >> z;
            //std::cout << x+y+z;
            check1 = check2 = check3 = false;
            if (x == '1') {
                check1 = true;
            }
            if (y == '1') {
                check2 = true;
            }
            if (z == '1') {
                check3 = true;
            }
            if (check1 & check2) {
                counter++;
            }
            else if (check2 & check3) {
                counter++;
            }
            else if (check3 & check1) {
                counter++;
            }
            else {
                
            }
    
        }
    
    std::cout << counter;
    }