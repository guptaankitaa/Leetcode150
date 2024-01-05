class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min = prices[0];
        int profit = 0;

        for(int i = 1; i < n; i++){
            if(prices[i] < min){
                min = prices[i];
            }
           int p = prices[i] - min;
          if(p > profit){
              profit = p;
              
           }
        }
        return profit;
    }
};

// TC = O(n)
// SC = O(1)
