#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int sell = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < buy) {
                buy = prices[i];
            }

            int profit = prices[i] - buy;

            if (profit > sell) {
                sell = profit;
            }
        }

        return sell;
    }
};

int main() {
    Solution solution;

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << "Maximum Profit: " << solution.maxProfit(prices) << endl;

    return 0;
    
}