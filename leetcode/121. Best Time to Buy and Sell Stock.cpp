class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int buy = prices[0];
            int profit = 0;
            for (int i = 1; i < prices.size(); i++) {
                if (prices[i] < buy) buy = prices[i];
                else if (prices[i] - buy > profit) profit = prices[i] - buy;
            }
            return profit;
        }
        
};






/*




class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(); // yep code nevers work first try
        int itr = 0;
        int max = 0;
        int min = 1000;
        for (int i = 0; i < n;i++) {
            if (prices[i] < min ) {
                min = prices[i];
                itr = i;
            }
            if (prices[i] > max && i > itr) {
                max = prices[i];
            }
        }
        // it loops tohrugh the entire array finds minimum value
        // now we take the itr so we can cut the string 
        for (int i = 0; i < n ;i++) {
            

        }
        return max;



    }// allright that passed another case 
};
*/
// hum so we are given an array we find the minimum element in that array
// and then we find the maximum element after that and we only check the array
// that is in right of the minimum
// i dont konw why we are given dp in tags
