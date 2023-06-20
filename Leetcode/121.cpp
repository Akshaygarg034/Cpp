// We have to check for each profit and return maximum among them.
// So we simply traverse array, updating profit each time and updating minimum value also, because we got maximum profit with minimum value.

// We cannot do like finding miniumum value and after that finding maximum value and return maxi - mini.
// Because it is possible that mini element lies at the end of array and we will not get any maxi after that.
// Then we will return profit 0, but there are other profits also, before the minimum value. Ans should be that not 0.
// So we have to calculate each profit and return maximum among them.

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int profit = 0;

        for(int i = 1; i < prices.size(); i++){

            profit = max(profit, prices[i] - mini);

            mini = min(mini, prices[i]);

        }

        return profit;
    }
};
