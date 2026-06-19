#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            minPrice = min(minPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i] - minPrice);
        }
        return maxProfit ;
    }
};

int main(){
vector<int> prices = {7,1,5,3,6,4};
Solution s;
int output = s.maxProfit(prices);
cout << "Output" << output;

    return 1;
}