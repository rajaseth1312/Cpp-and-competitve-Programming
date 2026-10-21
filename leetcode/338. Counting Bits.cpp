class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> x;
       // the function wont work here
        // basically a bit number is 2 ^ 0 + 2^ 1 + 2 ^ 2 + ...
        for ( int i = 0; i <= n; i++ ) { // n+1 length
            int sum = 0;
            int num = i;

            while (num != 0) {
                sum += num%2;
                num = num/2;
            }

            x.push_back(sum);
        }
        return x;
    }
};
// i also did this in class but in python 
// didnt understand bits set so didnt use that solution
