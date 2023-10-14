lass Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int sell = 1;
        int max_profit = 0;
        while(sell < prices.size()){
            if(prices[buy] < prices[sell]){
                int current_profit = prices[sell] - prices[buy];
                max_profit = max(max_profit, current_profit);
            }
            else{
                buy = sell; // Cause we alwayse want our selling price to be low
            }
            sell++;
        }
        return max_profit;
    }
};
