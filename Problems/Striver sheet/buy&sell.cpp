#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int cost = 0;
        int profit = 0;
        for(int i = 0; i < prices.size(); i++) {
            cost = prices[i] - buy;
            profit = max(profit, cost);
            buy = min(buy, prices[i]);
        }
        return profit;
    }
};

int main() {
    Solution sol;
    vector<int> prices = {7, 1, 5, 3, 6, 4}; // Sample input
    int result = sol.maxProfit(prices);
    cout << "Maximum Profit: " << result << endl;
    return 0;
}
